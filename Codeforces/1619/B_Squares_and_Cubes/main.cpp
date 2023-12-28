#include<bits/stdc++.h>
using namespace std;

long int r2(long int num);
long int r3(long int num);
long int r6(long int num);

int main()
{
	int k,j;
	long int n,ans[20];
	cin>>k;
	for(j=0;j<k;j++)
	{
		cin>>n;
		ans[j]=r2(n)+r3(n)-r6(n);
	}
	for(j=0;j<k;j++)
	{
		cout<<ans[j]<<"\n";
	}
	return 0;
}

long int r2(long int num)
{
	long int i=31623;
	while(num<i*i)
	{
		--i;
	}
	return i;
}

long int r3(long int num)
{
	long int i=1000;
	while(num<i*i*i)
	{
		--i;
	}
	return i;
}

long int r6(long int num)
{
	long int i=32;
	while(num<i*i*i*i*i*i)
	{
		--i;
	}
	return i;
}