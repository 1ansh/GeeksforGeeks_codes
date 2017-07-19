#include <bits/stdc++.h>

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n,i,j,min=INT_MAX;
    	cin>>n;
    	vector<int> arr(n);
    	vector<int>min_r_till(n,0);
		int min_r=INT_MAX,max_l=INT_MIN;
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		min_r=arr[n-1];
		max_l=arr[0];
		for(i=n-2;i>=0;i--)
    	{
    		min_r_till[i]=min_r;
    		if(arr[i]<min_r)
    		{
    			min_r=arr[i];
			}
		}
		for(i=1;i<n-1;i++)
		{
			if(arr[i]>=max_l && arr[i]<=min_r_till[i])
			{
				cout<<arr[i]<<endl;
				break;
			}
			if(arr[i]>max_l)
			{
				max_l=arr[i];
			}
		}
		if(i==n-1)
		{
			cout<<"-1"<<endl;
		}
	}
}

