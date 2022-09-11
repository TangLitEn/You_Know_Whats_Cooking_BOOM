#include <bits/stdc++.h>
#define ll long long 
#define db double

using namespace std;

void solve(void)
{
    ll N,K; 
    cin>>N>>K;
    ll A[N];
    for (ll i=0;i<N;i++) cin>>A[i];
    sort(A,A+N);
    if(N==1) cout<<"YES"<<endl;
    else{
        if(A[N-1]+A[0]>K) cout<<"NO"<<endl;
        else cout<<"YES"<<endl; 
    }
    
    
    
}

int main(void)
{
    ll n;
    cin>>n;
    while(n--) solve();
    return 0;
}
