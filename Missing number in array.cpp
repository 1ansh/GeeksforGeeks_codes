#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int i,k;
    	int sum = n*(n+1)/2;
    	for(i=0;i<n-1;i++)
    	{
    		cin>>k;
    		sum=sum-k;
		}
		cout<<sum<<endl;
	}
}
