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
         int max=arr[n-1];
         arr[n-1]=-1;
         for(i=n-2;i>=0;i--)
         {
             int temp = arr[i];
             arr[i] = max;
             if(temp > max)
             {
                 max = temp;
             }
         }
         for(i=0;i<n;i++)
         {
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }
	return 0;
}
