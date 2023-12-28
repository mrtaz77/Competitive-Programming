#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,t;
	cin>>t;
	while(t--)
	{
		int n,ans=0,temp;
		cin>>n;
		#define N n
		int a[N][N];
		cin.ignore();
		for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)a[i][j]=getchar()-'0';
				cin.ignore();
			}
		if(n%2)
		{
			for(j=0;j<n-1;j++)
				{
					for(i=0;i<(n-1)/2;i++)
					{
						if(a[i][i+j]!=-1 && a[i+j][n-1-i]!=-1 && a[n-i-1][n-i-1-j]!=-1 && a[n-i-1-j][i]!=-1)
						{
							//cout<<"ans="<<ans<<"+("<<a[i][i+j]<<"+"<<a[i+j][n-1-i]<<"+"<<a[n-i-1][n-i-1-j]<<"+"<<a[n-i-1-j][i]<<")%2"<<endl;
							temp=a[i][i+j]+a[i+j][n-1-i]+a[n-i-1][n-i-1-j]+a[n-i-1-j][i];
							a[i][i+j]=a[i+j][n-1-i]=a[n-i-1][n-i-1-j]=a[n-i-1-j][i]=-1;
							if(temp==2)ans+=2;
							else ans+=(temp%2);
						}
					}
				}
		}
		else
		{
			for(j=0;j<n-1;j++)
				{
					for(i=0;i<n/2;i++)
					{
						if(a[i][i+j]!=-1 && a[i+j][n-1-i]!=-1 && a[n-i-1][n-i-1-j]!=-1 && a[n-i-1-j][i]!=-1)
						{
							//cout<<"ans="<<ans<<"+("<<a[i][i+j]<<"+"<<a[i+j][n-1-i]<<"+"<<a[n-i-1][n-i-1-j]<<"+"<<a[n-i-1-j][i]<<")%2"<<endl;
							temp=a[i][i+j]+a[i+j][n-1-i]+a[n-i-1][n-i-1-j]+a[n-i-1-j][i];
							a[i][i+j]=a[i+j][n-1-i]=a[n-i-1][n-i-1-j]=a[n-i-1-j][i]=-1;
							if(temp==2)ans+=2;
							else ans+=(temp%2);
						}
					}
				}
		}
		cout<<ans<<endl;

	}
}