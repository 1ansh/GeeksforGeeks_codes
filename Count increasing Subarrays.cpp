#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,count=0;
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
                if(arr[j]>arr[j-1])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
