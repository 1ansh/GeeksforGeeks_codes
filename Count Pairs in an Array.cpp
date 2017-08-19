#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,count=0;
        cin>>n;
        vector<int> ar(n);
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(i*ar[i]>j*ar[j])
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
