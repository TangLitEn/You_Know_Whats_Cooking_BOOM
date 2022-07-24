//Problem: HDIVISR Contest: FEB21C User: lien_0212

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,i,j=1,x=1;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if (n%i == 0 && i <= 10) x=i;
    }
    cout<<x<<endl;
    return 0;
}
