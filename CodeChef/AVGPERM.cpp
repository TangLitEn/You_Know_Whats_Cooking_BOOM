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
    ll a; // number of permutation
    cin>>a;
    if(a==3) cout<<"3 1 2";
    else{
        cout<<a<<" ";
        cout<<a-2<<" ";
        int hold = a-4;
        while(hold>0) {
            cout<<hold<<" ";
            hold--;
        }
        cout<<a-3<<" ";
        cout<<a-1<<" ";
    }
    cout<<endl;
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
