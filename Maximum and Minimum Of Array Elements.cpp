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
        int max = INT_MIN,min = INT_MAX;
        for(i=0;i<n;i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
            }
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        cout<<max<<" "<<min<<endl;
    }
	return 0;
}
