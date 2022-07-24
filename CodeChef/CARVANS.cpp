//Problem: CARVANS Contest: LRNDSA01 User: lien_0212

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int m,i,j,k=1,a;
    cin>>m;
    long int h[m];
    for (i=0;i<m;i++) 
    {
        cin>>a;
        h[i]=a;
    }
    j = h[0];
    for (i=1;i<=m;i++) 
    {
        if(h[i]<j) 
        {
            k += 1;
            j=h[i];
        }
    }
    cout<<k<<endl;
}

int main() {
    int i,n;
    cin>>n;
    for (i=0;i<n;i++) solve();
    return 0;
}
