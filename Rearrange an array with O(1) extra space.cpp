#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{
			arr[i] += (arr[arr[i]]%n)*n;
		}
		for(i=0;i<n;i++)
		{
			arr[i] /= n;
		}
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
