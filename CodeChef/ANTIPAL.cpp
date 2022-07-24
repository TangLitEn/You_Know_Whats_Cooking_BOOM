//Problem: ANTIPAL Contest: START20C User: lien_0212

#include <bits/stdc++.h>
using namespace std;

void solve(long long x){
    if (x%2!=0){
        cout<<"-1"<<endl;
    }
    else {
        while(x--){
            if(x%2!=1) cout<<'1';
            if(x%2==0) cout<<'0';
        }
        cout<<""<<endl;
    }
}

int main(void)
{
    long long test;
    cin >> test;
    long long x;
    while(cin>>x) {
        //cout<<x<<endl; 
        solve(x);
    }
    return 0;
}
