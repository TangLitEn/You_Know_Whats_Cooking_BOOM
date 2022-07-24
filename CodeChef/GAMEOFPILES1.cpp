//Problem: GAMEOFPILES1 Contest: JULY221D User: lien_0212

#include <bits/stdc++.h>
using namespace std;

bool toggleBool(bool Bool);

void solve(void)
{
    long long n,r=0,i;
    int flag = 0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) {
        //cout<<a[i]<<" ";
    }
    //cout<<endl;
    for(i=0;i<n;i++){
        if(a[i]==1 && flag==0) 
        {
            cout<<"CHEF"<<endl;
            flag=1;
        }
    }
    
    //not yet clear all AKA not yet decide winner, solve based on optimal step
    if(flag==0){
        long long sum=0;
        for(i=0;i<n;i++) sum+=a[i];
        if(sum%2==0)cout<<"CHEFINA"<<endl;
        else cout<<"CHEF"<<endl;
    }
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}

bool toggleBool(bool Bool){
    //toggle the inputed Bool
    if(Bool)return false;
    else return true;
    //return the opposite
}

void getMaxInArrayWithIndex(long long* ARR,long long* INDEX){
    long long i = 0;
    //long long max = *ARR[0];
}
