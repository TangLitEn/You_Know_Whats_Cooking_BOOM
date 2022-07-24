//Problem: FCTRL Contest: LRNDSA01 User: lien_0212

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(long long int k)
{
    int n=0,i;
    for (i=5; k/i >= 1 ;i *= 5) n += k/i; 
    cout<<n<<endl;
}

int main() {
    int i,k;
    long long int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin >> k;
        solve(k);
    }
	return 0;
}
