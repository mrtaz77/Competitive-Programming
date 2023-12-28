#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long a,z,a_max=0;
		cin>>n>>z;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			a_max=max(a_max,a|z);
		}
		cout<<a_max<<endl;
	}
}