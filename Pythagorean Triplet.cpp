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
    	int n,i,j,num;
    	cin>>n;
    	vector<int> arr(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		bool flag = false;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(ceil(sqrt(arr[i]*arr[i] + arr[j]*arr[j]))==floor(sqrt(arr[i]*arr[i] + arr[j]*arr[j])))
				{
					num = sqrt(arr[i]*arr[i] + arr[j]*arr[j]);
					if(binary_search(arr.begin(),arr.end(),num))
					{
						flag=true;
					}
				}
			}
			if(flag)
			{
				break;
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

