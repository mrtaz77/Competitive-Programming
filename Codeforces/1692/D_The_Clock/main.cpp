#include<bits/stdc++.h>
using namespace std;
int cp(int a,int b)
{
	if((a/10)==(b%10))
	{
		if((a%10)==(b/10))return 1;
		else return 0;
	}
	else return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int x,h,m,i,j,count=0;
		cin>>s>>x;
		h=(s[0]-'0')*10+(s[1]-'0');
		m=(s[3]-'0')*10+(s[4]-'0');
		if(cp(h,m))count++;
		i=h;
		j=m;
		if(j+x>=60)i=(i+(j+x)/60)%24;
		j=(j+x)%60;
		while(!(i==h&&j==m))
		{
			if(cp(i,j))count++;

			if(j+x>=60)i=(i+(j+x)/60)%24;
			j=(j+x)%60;
		}
		cout<<count<<endl;
	}
}