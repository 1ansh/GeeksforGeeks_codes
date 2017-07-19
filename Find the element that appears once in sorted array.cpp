#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n,i,j,res=0;
    	cin>>n;
    	vector<int> arr(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		res = res^arr[i];
		}
		cout<<res<<endl;
	}
}

