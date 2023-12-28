#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	ll  a[n],even=0,odd=0;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]%2)odd++;
		else even++;
	}
	cout<<min(odd,even)<<endl;
	}
}