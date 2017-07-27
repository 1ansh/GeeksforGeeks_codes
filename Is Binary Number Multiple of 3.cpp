#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int sum = 0;
		for(int i =0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				if(i % 2 ==0)
				{
					sum++;
				}
				else
				{
					sum--;
				}
			}
		}
		if(sum%3==0)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}

