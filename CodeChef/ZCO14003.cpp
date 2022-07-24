//Problem: ZCO14003 Contest: LRNDSA01 User: lien_0212

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	long int n,i,j;
	cin>>n;
	long int h[n],r[n];
	for(i=0;i<n;i++) cin>>h[i];
	sort(h,h+n);
	for(i=0;i<n;i++) r[i]=h[i]*(n-i);
    sort(r,r+n);
	cout<<r[n-1];
	return 0;
}

