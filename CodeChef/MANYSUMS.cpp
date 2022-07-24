//Distinct Pair Sums
//Problem Code:
//MANYSUMS
//Contest Code:
//COOK126
//Difficulty Rating:1480

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
    ll a,b; // a lower limit, b upper limit
    cin>>a>>b;
    ll dif = b-a; // total distinct number 
    if(dif==0) cout<<1<<endl;
    else cout<<2*dif + 1<<endl; //basically the range between two numbers DEFINE how large the span of the vector will be, the range is 2*range +1
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
