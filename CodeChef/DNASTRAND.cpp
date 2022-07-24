//Problem: DNASTRAND Contest: JUNE222C User: lien_0212

#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long n,r=0,i;
    cin>>n;
    char a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) {
        if(a[i]=='A') a[i]='T';
        else if (a[i]=='T') a[i]='A';
        else if (a[i]=='C') a[i]='G';
        else if (a[i]=='G') a[i]='C';
    }
    for(i=0;i<n;i++) cout<<a[i];
    cout<<endl;
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}
