#include <bits/stdc++.h>

using namespace std;




int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int i,n;
    	cin>>n;
    	stack<int> s;
    	vector<int> ar(n);
    	for(i=0;i<n;i++)
    	{
    		cin>>ar[i];
		}
		i=n-1;
		int max = ar[i];
		s.push(max);
		for(i=n-2;i>=0;i--)
		{
			if(ar[i]>max)
			{
				max=ar[i];
				s.push(max);
			}
		}
		while(!(s.empty()))
		{
			cout<<s.top()<<" ";
			s.pop();
		}
		cout<<endl;
	}
}

