//Problem: KNIGHT2 Contest: JULY221D User: lien_0212

#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long n,r=0,i;
    int X1,X2,Y1,Y2;
    cin>>X1>>X2>>Y1>>Y2;
    int INIT = X1+Y1;
    int END = X2+Y2;
    if(INIT%2 == END%2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}
