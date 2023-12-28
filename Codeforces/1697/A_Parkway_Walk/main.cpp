#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a[100];
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		long int  sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum-m>0)cout<<sum-m<<endl;
		else cout<<0<<endl;
	}
}