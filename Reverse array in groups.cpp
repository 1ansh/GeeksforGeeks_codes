#include <bits/stdc++.h>

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k,i,j,max=INT_MIN;
    	cin>>n;
    	vector<int> arr(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		cin>>k;
		int s=0,e=s+k-1;
		while(s<n)
		{
			int l=s;
			int r=min(n-1,e);
			while(l<r)
			{
				int temp = arr[l];
				arr[l] = arr[r];
				arr[r] = temp;
				l++;
				r--;
			}
			s=min(n-1,e)+1;
			e=s+k-1;
		}
		for(i=0;i<n;i++)
    	{
    		cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}

