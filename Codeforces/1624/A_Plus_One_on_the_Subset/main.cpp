#include<bits/stdc++.h>
using namespace std;

int main()
{
	int set[50],n,i,j,mx,mn,k,step[10000];
	cin>>k;
	for(j=0;j<k;j++)
	{
		cin>>n;
		for(i=0;i<n;i++)
			{
				cin>>set[i];
			}
		mx=0;
		for(i=0;i<n;i++)
		{
			if(set[i]>mx)mx=set[i];
		}
		mn=mx;
		for(i=0;i<n;i++)
		{
			if(set[i]<mn)mn=set[i];
		}
		step[j]=mx-mn;
		set[50]={0};
	}

		for(j=0;j<k;j++){
				cout<<step[j]<<"\n";
		}
		return 0;
}