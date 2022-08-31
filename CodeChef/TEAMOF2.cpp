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
    ll primeNumber[5]={2,3,5,7,11};
    ll studentNumber;
    cin>>studentNumber;
    ll studentResult[studentNumber];
    ll temp = studentNumber;
    while(temp--){
        ll numberOfQuestion,primeNumberTransformation=1;
        cin>>numberOfQuestion;
        while(numberOfQuestion--){
            ll temp_2;
            cin>>temp_2;
            primeNumberTransformation*=primeNumber[temp_2-1];
        }
        studentResult[studentNumber-temp]=primeNumberTransformation;
    }
    
    //ll temp_6 = studentNumber;
    //while(temp_6--){
        //cout<<studentResult[studentNumber-temp_6]<<" ";
    //}
    //cout<<endl;
    
    ll temp_3 = studentNumber;
    ll flag=0;
    while(temp_3-- && flag==0){
        ll check=studentNumber-temp_3+1;
        while(check<=studentNumber && flag==0){
            ll result_check = studentResult[check]*studentResult[studentNumber-temp_3];
            //cout<<result_check<<endl;
            if(result_check%2310==0) flag=1;
            check++;
        }
    }
    if(flag==1) cout<<"YES"<<endl;
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
