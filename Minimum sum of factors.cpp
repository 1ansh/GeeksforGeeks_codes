#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
       
        for(int i=2;i*i<=n;i++)
        {
            while(n%i==0)
            {
                sum+=i;
                n/=i;
            }
        }
        if(sum==0)
        cout<<n+1<<endl;
        else
        if(n!=1)
        cout<<sum+n<<endl;
        else
        cout<<sum<<endl;
    }
	return 0;
}
