//Problem: ACS Contest: JUNE222C User: lien_0212

#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long n; // score
    cin>>n;
    long long temp;
    temp = n/100; // how many full mark score
    n-=temp*100;
    if(n>(10-temp)) cout<<"-1"<<endl;
    else cout<<(temp+n)<<endl;
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}
