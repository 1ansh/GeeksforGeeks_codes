#include <bits/stdc++.h>

using namespace std;


int maxSumIS(vector<int> arr, int n )
{
    int i, j, max = 0;
    int msis[n];
 
     for ( i = 0; i < n; i++ )
        msis[i] = arr[i];
 
    for ( i = 1; i < n; i++ )
        for ( j = 0; j < i; j++ )
            if ( arr[i] > arr[j] && msis[i] < msis[j] + arr[i])
                msis[i] = msis[j] + arr[i];
 
    for ( i = 0; i < n; i++ )
        if ( max < msis[i] )
            max = msis[i];
 
    return max;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int i,n;
    	cin>>n;
    	vector<int> ar(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>ar[i];
		}
		int ans = maxSumIS(ar,n);
		cout<<ans<<endl;
	}
}

