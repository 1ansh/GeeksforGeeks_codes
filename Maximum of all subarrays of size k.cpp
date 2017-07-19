#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k,i,j,max=INT_MIN;
    	cin>>n>>k;
    	vector<int> arr(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		i=0;
		while(i<n-k+1)
		{
		    max=INT_MIN;
			for(j=i;j<i+k;j++)
			{
				if(arr[j]>max)
				{
					max=arr[j];
				}
			}
			i++;
			cout<<max<<" ";
		}
		cout<<endl;
	}
}

