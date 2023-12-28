#include<bits/stdc++.h>
using namespace std;
int ans[100];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)cin>>ans[i];
		for(int i=0;i<n;i++)
		{
			int b;
			cin>>b;
			for(int j=0;j<b;j++)
			{
				char c;
				cin>>c;
				if(c=='U')
				{
					if(ans[i]==0)ans[i]=9;
					else ans[i]--;
				}
				else
				{
					if(ans[i]==9)ans[i]=0;
					else ans[i]++;
				}
			}

		}
		for(int i=0;i<n;i++)cout<<ans[i]<<' ';
		cout<<endl;

	}
}