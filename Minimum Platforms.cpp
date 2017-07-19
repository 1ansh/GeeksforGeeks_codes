#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n,i,j;
    	cin>>n;
    	vector<int> arr(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		vector<int> dep(n);
		for(i=0;i<n;i++)
		{
			cin>>dep[i];
		}
		sort(arr.begin(),arr.end());
		sort(dep.begin(),dep.end());
		int count = 1,max=1;
		for(i=1;i<n;i++)
		{
			if(arr[i]>=dep[i-1])
			{
				continue;
			}
			else
			{
				count = 1;
				j=i-1;
				while(arr[i]<dep[j] && j>=0)
				{
					j--;
					count++;
				}
				if(count>max)
				{
					max=count;
				}
			}
		}
		cout<<max<<endl;
	}
}

