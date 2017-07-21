#include <bits/stdc++.h>

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n,i,j,min=INT_MAX;
    	cin>>n;
    	vector<int> arr(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		int e=0,s=0;
		bool flag = false;
		for(i=1;i<n;i++)
		{
			if(arr[i]<arr[i-1])
			{
				e=i-1;
				if(s!=e)
				{
					flag = true;
					cout<<"("<<s<<" "<<e<<") ";
				}
				s=i;
			}
			if(i==n-1)
			{
				e=i;
				if(s!=e)
				{
					flag = true;
					cout<<"("<<s<<" "<<e<<") ";
				}
			}
		}
		if(!flag)
		{
			cout<<"No Profit";
		}
		cout<<endl;
	}
}

