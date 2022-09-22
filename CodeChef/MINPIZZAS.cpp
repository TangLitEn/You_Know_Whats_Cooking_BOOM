#include <bits/stdc++.h>
#define ll long long 
#define db double

using namespace std;

void solve(void)
{
    int N,K; // number of friends, number of slice per pizza 
    cin>>N>>K;
    int hold = N;
    while(N%K!=0) N+=hold; 
    cout<<N/K<<endl;
}

int main(void)
{
    ll n;
    cin>>n;
    while(n--) solve();
    return 0;
}
