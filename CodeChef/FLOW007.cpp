//Problem: FLOW007 Contest: LRNDSA01 User: lien_0212

#include <iostream>
using namespace std;

void reverse(int num){
    int result=0;
    while(num>0)
    {
    result += (num%10);
    result *= 10;
    num /= 10;
    }
    result /= 10;
    cout<<result<<endl;
}


int main() {
	// your code goes here
	int times,i,hold;
	cin>>times;
	for(i=0;i<times;i++)
	{
	    cin>>hold;
	    reverse(hold);
	}
	return 0;
}
