#include<bits/stdc++.h>
using namespace std;

bool myfunc(int a,int b)
{
    return a>b;
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,i,sum=0;;
         cin>>n;
         vector<int> a(n);
         vector<int> b(n);
         for(i=0;i<n;i++)
         {
             cin>>a[i];
         }
         for(i=0;i<n;i++)
         {
             cin>>b[i];
         }
         sort(a.begin(),a.end());
         sort(b.begin(),b.end(),myfunc);
         for(i=0;i<n;i++)
         {
             sum=sum+a[i]*b[i];
         }
         cout<<sum<<endl;
     }
	return 0;
}
