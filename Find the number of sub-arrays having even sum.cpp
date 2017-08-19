#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,sum,count=0;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            sum = 0;
            for(j=i;j<n;j++)
            {
                sum+=arr[j];
                if(sum%2==0)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
