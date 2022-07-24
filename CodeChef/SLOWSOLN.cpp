//Problem: SLOWSOLN Contest: JULY221D User: lien_0212

#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long n,r=0,i;
    long long maxT,maxN,sumN; //maxT maybe is useless?
    cin>>maxT>>maxN>>sumN;
    long long N_Sum = 0;
    long long Sum = 0;
    long long T_tracker = maxT;
    while(N_Sum+maxN<=sumN && T_tracker!=0){
        N_Sum+=maxN;
        T_tracker--;
        Sum+=pow(maxN,2); // find the full load result
    }
    //cout<<N_Sum<<" "<<Sum<<" "<<T_tracker<<endl;
    if(T_tracker!=0){
        //find the final num to fit in; If needed
        int temp = sumN - N_Sum;
        //cout<<"diff : "<<temp<<endl;
        Sum+=pow(temp,2); 
    }
    
    cout<<Sum<<endl;
}

int main(void)
{
    long long n;
    cin>>n;
    while(n--) solve();
    return 0;
}
