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
    	int n,i,j;
    	cin>>n;
    	vector<int> arr(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		int ans = 0;
	    for (i = 1; i < n-1; i++) 
		{
	        int max_left = 0, max_right = 0;
	        for (j = i; j >= 0; j--) 
			{
	            max_left = max(max_left, arr[j]);
	        }
	        for (j = i; j < n; j++) 
			{
	            max_right = max(max_right, arr[j]);
	        }
	        ans += min(max_left, max_right) - arr[i];
	    }
	    cout<<ans<<endl;
	}
}

