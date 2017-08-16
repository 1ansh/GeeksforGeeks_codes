#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;	
	while(t--)
	{
		int f,s;
		cin>>f>>s;
		int d = s-f;
		int n;
		cin>>n;
		int ans = f+(n-1)*d;
		cout<<ans<<endl;
	}
    return 0;
}
