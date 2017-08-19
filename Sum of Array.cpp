#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0,key;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>key;
            sum+=key;
        }
        cout<<sum<<endl;
    }
	return 0;
}
