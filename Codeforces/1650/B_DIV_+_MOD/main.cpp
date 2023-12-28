#include<iostream>
using namespace std;
long int ans[10000];

int main()
{
	long int l,r,a,t,i,x,y;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>l>>r>>a;
		 x=l/a;
		y=r/a;
	    if(x==y)ans[i]=x+r%a;
	    else ans[i]=max(y+r%a,y-1+a-1);
	}
	for(i=0;i<t;i++)cout<<ans[i]<<"\n";
}