//Problem: PASSTHEEXAM Contest: JULY221D User: lien_0212

#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long n,r=0,i;
    long long a,b,c;
    cin>>a>>b>>c; // score for each round
    if(a>=10 && b>=10 && c>=10 && (a+b+c) >= 100) cout << "PASS"<<endl;
    else cout<<"FAIL"<<endl;
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}
