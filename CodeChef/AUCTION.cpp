//Problem: AUCTION Contest: JULY221D User: lien_0212

#include <bits/stdc++.h>
using namespace std;

string A = "Alice";
string B = "Bob";
string C = "Charlie";

void solve(void)
{
    long long n,r=0,i;
    long long a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<A<<endl;
    }
    else{
        if(b>c) cout<<B<<endl;
        else cout<<C<<endl;
    }
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}
