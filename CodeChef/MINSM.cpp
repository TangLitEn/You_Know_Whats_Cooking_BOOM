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
    ll a; // length of array
    cin>>a;
    
    ll b[a];
    
    for(int i = 0; i<a;i++) cin>>b[i];
    sort(b,b+a);
    
    // first number is the smallest, last place is the largest
    // use built in GCD to find the value, can just use the 1st number
    // Best case (most of the time will get 1)
    // if get one 1, then the sum will uplatimately = a , cause all number can be reduce to 1, which the sum correspond to the number of element
    // otherwise, if there is none 1, then all number will be converted to the 1st number (smallest number) and the sum will correspont to a * 1st Number
    
    ll temp=a,GCD=9999999999999;
    int flag = 0; // 1 flag
    while(flag == 0 && temp--){
        if(__gcd(b[1],b[temp]) != 1 && __gcd(b[1],b[temp])<GCD) GCD = __gcd(b[1],b[temp]);
        else if(__gcd(b[1],b[temp]) == 1) {
            flag = 1; // terminate the while loop
            cout<<a<<endl;
        }
    }
    
    if (flag != 1) cout<<a*GCD<<endl; // no raised flag
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
