#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int n;
		int a[26]={0};
		string s;
		cin>>n;
		cin>>s;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(a[(int)s[i]-65]==0)
			{
				ans+=2;
				a[(int)s[i]-65]++;
			}
			else
			{
				ans++;
			}
		}
		cout<<ans<<endl;


	}
}