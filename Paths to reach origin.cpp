#include<bits/stdc++.h>
using namespace std;

int countPaths(int n, int m)
{
    if (n==0 || m==0)
        return 1;

    return (countPaths(n-1, m) + countPaths(n, m-1));
}


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        cout<<countPaths(n,m)<<endl;
    }
	return 0;
}
