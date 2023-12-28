#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		n=abs(n);
		if(n%3==0)cout<<(n/3)<<endl;
		else if(n%3==1)
		{
			if(n==1)cout<<2<<endl;
			else cout<<(n-4)/3+2<<endl;
		}
		else cout<<(n/3)+1<<endl;
	}
}