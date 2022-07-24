//Problem: LAPIN Contest: LRNDSA01 User: lien_0212

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string ans[t];
    
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        
        string s1,s2;
        s1=s.substr(0,s.size()/2);
        s2=s.substr((s.size()+1)/2,s.size()/2);
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1.compare(s2)==0)
        ans[i]="YES";
        else
        ans[i]="NO";
        
    }
    for(int i=0;i<t;i++)
    cout<<ans[i]<<endl;
    return 0;
}

