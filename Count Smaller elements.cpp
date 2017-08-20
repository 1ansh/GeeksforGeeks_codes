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
        vector<int> mincount(n,0);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++)
        {
            int count=0;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    count++;
                }
            }
            mincount[i] = count;
        }
        for(i=0;i<n;i++)
        {
            cout<<mincount[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
