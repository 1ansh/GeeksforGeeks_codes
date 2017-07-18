#include <bits/stdc++.h>

using namespace std;

int maxSumSub(int ar[],int n)
{
	int maxEnd=0,maxSoFar=INT_MIN,i;
	for(i=0;i<n;i++)
	{
		maxEnd=maxEnd+ar[i];
		if(maxSoFar<maxEnd)
		{
			maxSoFar=maxEnd;
		}
		if(maxEnd<0)
		{
			maxEnd=0;
		}
	}
	return maxSoFar;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int ar[n],i;
    	for(i=0;i<n;i++)
    	{
    		cin>>ar[i];
		}
		int ans = maxSumSub(ar,n);
		cout<<ans<<endl;
	}
}

