#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i, t,c[10001];
	long int l1,l2,l3,lmax;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>l1>>l2>>l3;
		if((l1==l2+l3)||(l2==l1+l3)||(l3==l2+l1)||((l1==l2)&&!(l3%2))||((l2==l3)&&!(l1%2))||((l3==l1)&&!(l2%2)))
		{
			c[i]=1;
		}
		else c[i]=0;
	}
	i=1;
	for(i=1;i<=t;i++)
	{
		if(c[i])cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}