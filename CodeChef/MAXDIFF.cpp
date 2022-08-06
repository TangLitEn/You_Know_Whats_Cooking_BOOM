//not yet completed

#include <bits/stdc++.h>
#define ll long long 
#define db double

using namespace std;

void printArray (ll* A,ll n);
bool toggleBool(bool Bool);
bool even(ll x);
ll fact(ll x);
ll combination(ll n, ll r);
db arithmeticSum(db a,db n,db d);

void solve(void){
    ll N,K; // N is the number of item, K is the min items
    cin>>N>>K;
    ll A[N];
    for(int i=0;i<N;i++) cin>>A[i];
    sort(A,A+N);
    ll BIG=0,SMALL=0;
    //printArray(A,N);
    for(ll i = 0;i < K;i++) SMALL += A[i];
    for(ll i = K;i < N;i++) BIG += A[i];
    //cout<<BIG<<endl;
    //cout<<SMALL<<endl;
    cout<<BIG-SMALL<<endl;
}

int main(void) {
    ll n;
    cin>>n;
    while(n--) solve();
    return 0;
}

void printArray (ll* A,ll N){
    for(ll i=0;i<N;i++) cout<<A[i]<<" ";
    cout<<endl;
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
