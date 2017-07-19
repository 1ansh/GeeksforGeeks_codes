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
		sort(arr.begin(),arr.end());
		cout<<arr[k-1]<<endl;
	}
}

