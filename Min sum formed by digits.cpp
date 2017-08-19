#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int fac=1,num1=0,num2=0;
        for(i=n-1;i>=0;i=i-2)
        {
            num1=num1+arr[i]*fac;
            fac=fac*10;
        }
        fac=1;
        for(i=n-2;i>=0;i=i-2)
        {
            num2=num2+arr[i]*fac;
            fac=fac*10;
        }
        cout<<num1+num2<<endl;
    }
	return 0;
}
