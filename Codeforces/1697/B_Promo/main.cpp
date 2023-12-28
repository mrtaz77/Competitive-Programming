#include<bits/stdc++.h>
using namespace std;
long long int p[200000];
long long int sum[200000];
int main()
{
	int i,n,q;
	cin>>n>>q;
	for(i=0;i<n;i++)cin>>p[i];
	sort(p,p+n);
	sum[0]=p[0];
	for(i=1;i<n;i++)sum[i]=sum[i-1]+p[i];

	while(q--)
	{
		long int x,y;
		cin>>x>>y;
		cout<<sum[n-x+y-1]-sum[n-x-1]<<endl;
	}
}