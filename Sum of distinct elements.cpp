#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,sum=0;
        cin>>n;
        set<int> arr;
        for(i=0;i<n;i++)
        {
            cin>>j;
            arr.insert(j);
        }
        set<int>::iterator it;
        for(it=arr.begin();it!=arr.end();it++)
        {
            sum = sum + *it;
        }
        cout<<sum<<endl;
    }
	return 0;
}
