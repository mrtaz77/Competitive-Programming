#include<bits/stdc++.h>
using namespace std;

int a[100],ans[100];
int unique(int n)
{
	int i,j,count=1;
	for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])a[i]=-a[i];
			}
		}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])break;
			else
			{
				 if(j==n-1)count++;
			}
		}
	}

	return count;
}
int main()
{
	int t,i,n,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		ans[i]=unique(n);
	}
	for(i=0;i<t;i++)cout<<ans[i]<<"\n";
}