#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans=0;
		cin>>n;
		vector<long long>a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)
		{
			if(a[i]!=0)
			{
				i++;
				ans++;
				while(i<n&&a[i])i++;
			}
		}
		cout<<min(2,ans)<<endl;
	}
}