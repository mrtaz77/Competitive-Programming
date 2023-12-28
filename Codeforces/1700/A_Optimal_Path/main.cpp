#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		long long  int n,m;
		cin>>n>>m;
		long long int x=(m*(m+1))/2+m*((n*(n+1))/2-1);
		cout<<x<<endl;
	}
}