#include<bits/stdc++.h>
using namespace std;

void rearrange(vector<int> &arr, int n)
{
    int temp[n];
    int small=0, large=n-1;
    int flag = true;
 
    for (int i=0; i<n; i++)
    {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
 
        flag = !flag;
    }
 
    for (int i=0; i<n; i++)
        arr[i] = temp[i];
}

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
       rearrange(arr,n);
       int sum =0;
       for(i=0;i<n;i=i+2)
       {
           sum = sum+arr[i]*arr[i+1];
       }
       cout<<sum<<endl;
   }
	return 0;
}
