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
    ll a; // a is size of array to create 
    cin>>a; // get the size
    ll size[a]; // create an array with the correct size
    for(int i = 0;i<a;i++) cin>>size[i]; // input the size into the respective location
    
    string V; // binary result string
    cin>>V;
    
    ll min_size = 999999999; // upper boundary
    
    for(int i = 0;i<a;i++) if(V[i] == '0' && size[i] < min_size) min_size = size[i];
    cout<<min_size<<endl;
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
