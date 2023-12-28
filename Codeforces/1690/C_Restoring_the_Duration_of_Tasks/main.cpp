#include<iostream>
using namespace std;
long int s[200000];
long int f[200000];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,i;
		cin>>n;
		for(i=0;i<n;i++)cin>>s[i];
		for(i=0;i<n;i++)cin>>f[i];
		for(i=0;i<n;i++)cout<<min(f[i]-s[i],f[i]-f[i-1])<<" ";
		cout<<endl;
	}
}