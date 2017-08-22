#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,maxdiff = INT_MIN;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((arr[j]-arr[i]) > maxdiff)
                {
                    maxdiff = arr[j]-arr[i];
                }
            }
        }
        cout<<maxdiff<<endl;
    }
	return 0;
}
