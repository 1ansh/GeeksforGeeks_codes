#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,i;
		cin>>n>>x;
		vector<int> ar(n);
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar.begin(),ar.end());
		int l=0,r=n-1;
		bool flag = false;
		while(l<r)
		{
			int sum = ar[l] + ar[r];
			if(sum == x)
			{
				flag = true;
				break;
			}
			else if(sum < x)
			{
				l++;
			}
			else
			{
				r--;
			}
		}
		if(flag)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}

