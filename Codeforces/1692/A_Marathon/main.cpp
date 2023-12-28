#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,sum=0;
		cin>>a>>b>>c>>d;
		if(a<b)sum++;
		if(a<c)sum++;
		if(a<d)sum++;
		cout<<sum<<endl;
	}
}