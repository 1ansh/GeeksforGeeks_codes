#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int i,n,sum=0;
    	cin>>n;
    	vector<int> ar(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>ar[i];
    		sum=sum+ar[i];
		}
		if(n==1)
		{
			cout<<"1"<<endl;
			continue;
		}
		int l=ar[0],r=sum-ar[0],ans=-1;
		for(i=1;i<n;i++)
		{
			r=r-ar[i];
			if(l==r)
			{
				ans=i;
				break;
			}
			l=l+ar[i];
		}
		if(ans==-1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<ans+1<<endl;
		}
	}
}

