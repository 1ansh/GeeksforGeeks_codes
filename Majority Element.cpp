#include<bits/stdc++.h>

using namespace std;


int majorityElement(vector<int> ar,int n )
{
	int maj_ind = 0;
	int i,count = 1;
	for(i=1;i<n;i++)
	{
		if(ar[maj_ind] == ar[i])
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count == 0)
		{
			maj_ind = i;
			count = 1;
		}
	}
	return ar[maj_ind];
}

int isMajority(vector<int> ar,int n)
{
	int count = 0,i;
	int element = majorityElement(ar,n);
	for(i=0;i<n;i++)
	{
		if(ar[i] == element)
		{
			count++;
		}
		if(count > n/2)
		{
			return element;
		}
	}
	return -1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		vector<int> ar(n);
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		int ans = isMajority(ar,n);
		if(ans != -1)
		{
			cout<<ans<<endl;
		}
		else
		{
			cout<<"NO Majority Element"<<endl;
		}
	}
}

