//Problem: CNTPEAK Contest: CDRV21C User: lien_0212

#include <bits/stdc++.h>
using namespace std;

void solve(void)
{   
    int n;
    cin>>n;
    
    if (n<=2) cout<<0<<endl;
    else{
        int hold[n];
        int len=n;
        n = pow(3,n);
        int total_extrema=0;
        
        while(n--){
            // create the number list
            int temp=n;
            
            for(int i=0;i<len;i++){
                hold[i]=temp%3; // base 3 number
                temp = temp/3; // create a base 3 array
            }
            
            //cout<<hold[0]<<"-"<<hold[1]<<"-"<<hold[2]<<endl;
            //cout<<hold[0]<<"-"<<hold[1]<<"-"<<hold[2]<<"-"<<hold[3]<<"-"<<hold[4]<<endl;
            
            for(int i=1;i<=len-2;i++){ // go thru every number position until final second position
                if(hold[i]>hold[i-1]&&hold[i]>hold[i+1]) total_extrema++;
                if(hold[i]<hold[i-1]&&hold[i]<hold[i+1]) total_extrema++;
            }
            
            temp--;
        }
        cout<<total_extrema<<endl;
    }
    
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}
