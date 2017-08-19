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
        int k1,k2,sum=0;
        cin>>k1>>k2;
        sort(arr.begin(),arr.end());
        for(i=k1;i<k2-1;i++)
        {
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
	return 0;
}
