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
        int k,count=0;
        cin>>k;
        for(i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
