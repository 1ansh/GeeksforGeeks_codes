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
    	int n,m,i,j,min=INT_MAX;
    	cin>>n;
    	vector<int> arr(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		cin>>m;
		for(i=0;i<=n-m;i++)
		{
			if(arr[i+m-1]-arr[i]<min)
			{
				min=arr[i+m-1]-arr[i];
			}
		}
		cout<<min<<endl;
	}
}

