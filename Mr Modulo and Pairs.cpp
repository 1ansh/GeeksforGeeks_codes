#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,count=0;
        cin>>n>>k;
        vector<int> arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]%arr[j]==k)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
