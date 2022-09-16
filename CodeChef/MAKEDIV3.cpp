#include <bits/stdc++.h>
#define ll long long 
#define db double

using namespace std;

void solve(void)
{
    ll a;
    cin>>a; // length 
    
    if(a==1) cout<<"3"<<endl;
    else {
        a-=2;
        cout<<"1";
        while(a--) cout<<"0";
        cout<<"5"<<endl;
    }
    // this method is a bit BUG LOL
}

int main(void)
{
    ll n;
    cin>>n;
    while(n--) solve();
    return 0;
}
