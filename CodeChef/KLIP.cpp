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
    ll a,b; // a is length of the string, b is the K 
    string S; 
    cin>>a>>b>>S;
    for(int i=0;i<a-b+1;i++){
        if(S[i]!='0'){
            //flip the subsequent bit in K region
            for(int j=0;j<b;j++){
                if(S[i+j]=='1') S[i+j]='0';
                else S[i+j]='1';
            }
        }
    }
    cout<<S<<endl;
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
