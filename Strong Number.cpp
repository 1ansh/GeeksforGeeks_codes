#include <iostream>
using namespace std;

int main() {
	int fac[10]={1,1,2,6,24,120,720,5040,40320,362880};
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0,dupn;
	    cin>>n;
	    dupn = n;
	    while(dupn)
	    {
	        sum = sum+fac[dupn%10];
	        dupn=dupn/10;
	    }
	    if(sum==n)
	    {
	        cout<<"Strong"<<endl;
	    }
	    else
	    {
	        cout<<"Not Strong"<<endl;
	    }
	}
	return 0;
}
