#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,count=0,j,sum,product;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            sum=0;product=1;
            for(j=i;j<n;j++)
            {
                sum+=arr[j];
                product*=arr[j];
                if(sum==product)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
	return 0;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,count=0,j,sum,product;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            sum=0;product=1;
            for(j=i;j<n;j++)
            {
                sum+=arr[j];
                product*=arr[j];
                if(sum==product)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
