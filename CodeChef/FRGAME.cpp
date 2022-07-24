//Problem: FRGAME Contest: CDRV21C User: lien_0212

#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long A,B,C,D;
    cin>>A>>B>>C>>D;
    
    if (A>=B){ // nithin is winning
        B+=C;
    }
    else if (B>A){ // S is winning 
        A+=C;
    }
    
    if (A>=B){ // nithin is winning
        B+=D;
    }
    else if (B>A){ // S is winning 
        A+=D;
    }
    
    if (A>=B){ // nithin is winning
        cout<<"N"<<endl;
    }
    else if (B>A){ // S is winning 
        cout<<"S"<<endl;
    }
    
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}
