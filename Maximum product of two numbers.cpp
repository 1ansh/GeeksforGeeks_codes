#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        sort(arr.begin(),arr.end());
        cout<<arr[n-1]*arr[n-2]<<endl;
    }
	return 0;
}
