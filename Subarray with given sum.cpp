#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int i,n,k,s=0,e=0,currsum=0;
    	cin>>n>>k;
    	int ar[n];
    	for(i=0;i<n;i++)
    	{
    		cin>>ar[i];
		}
		currsum=ar[0];
		while(e<n)
		{
			if(currsum>k)
			{
			    currsum = currsum - ar[s];
				s=s+1;
			}
			if(currsum==k)
			{
				break;
			}
			if(currsum<=k)
			{
			    e++;
			    if(e<n)
			    {
				    currsum=currsum+ar[e];
			    }
			}
		}
		if(e==n)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<s+1<<" "<<e+1<<endl;
		}
	}
}

