//Problem: GENE01 Contest: START20C User: lien_0212

#include <bits/stdc++.h>
using namespace std;

int number_assigner(char a){
    char hold[]={'R','B','G'}; 
    for (int i=0;i<3;i++){
        if (a==hold[i]){
            return i;
            break;
        }
    }
}


int main(void)
{
    char a,b;
    int hold_a,hold_b;
    int most_common;
    cin>>a>>b;
    hold_a = number_assigner(a);
    hold_b = number_assigner(b);
    most_common = min(hold_a,hold_b);
    if (most_common == 0) cout<<'R'<<endl;
    else if (most_common == 1) cout<<'B'<<endl;
    else if (most_common == 2) cout<< 'G'<<endl;
    return 0;
}
