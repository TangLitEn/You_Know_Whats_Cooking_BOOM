//Problem: CHEFCAND Contest: JULY221D User: lien_0212

#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long n,r=0,i;
    long long a,b;//the number of children and also the candy we have
    cin>>a>>b;
    if(b>=a) cout<<0<<endl;
    else{
        float diff = a-b;
        cout<<ceil(diff/4)<<endl;
    }
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}
