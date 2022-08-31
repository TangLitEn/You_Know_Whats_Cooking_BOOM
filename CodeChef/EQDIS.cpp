#include <bits/stdc++.h>
#define ll long long 
#define db double

using namespace std;

bool toggleBool(bool Bool);
bool even(ll x);
ll fact(ll x);
ll combination(ll n, ll r);
db arithmeticSum(db a,db n,db d);

void solve(void)
{
    int length,uniqueElement=0,uniqueDuplicantsElement=0;
    cin>>length;
    int FullArray[length];
    
    int temp = length;
    while(temp--) FullArray[length-temp-1]=0; // reset the array to all 0
    
    int temp_2 = length;
    while(temp_2--){
        int hold;
        cin>>hold;
        //cout<<"INPUT "<<hold<<endl;
        //cout<<"ARRAY HOLDING: "<<FullArray[hold]<<endl;
        if (FullArray[hold-1]==0) uniqueElement+=1;
        if (FullArray[hold-1]==1) uniqueDuplicantsElement+=1;
        //cout<<"UE: "<<uniqueElement<<"  UDE: "<<uniqueDuplicantsElement<<endl;
        FullArray[hold-1]+=1;
    }
    
    /*
    int temp_3 = length;
    while(temp_3--) cout<<FullArray[length-temp_3-1]<<" ";
    cout<<endl;
    */
    
    //cout<<uniqueElement<<endl;
    //cout<<uniqueDuplicantsElement<<endl;
    if(uniqueElement%2==0) cout<<"YES"<<endl;
    else if(uniqueDuplicantsElement>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(void)
{
    ll n;
    cin>>n;
    while(n--) solve();
    return 0;
}

bool toggleBool(bool Bool){
    //toggle the inputed Bool
    if(Bool)return false;
    else return true;
    //return the opposite
}
bool even(ll x){
    return (x%2==0);
}
ll fact(ll x) {
    if(x==0) return 1;
    else return fact(x-1)*x;
}
ll combination(ll n, ll r){
    return fact(n)/(fact(n-r)*fact(r));
}
db arithmeticSum(db a,db n,db d){
    return (n/2)*(2*a+(n-1)*d);
}
