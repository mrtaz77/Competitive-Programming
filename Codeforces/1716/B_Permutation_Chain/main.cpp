#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	int a[100];
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)a[i]=i+1;
		cout<<n<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)cout<<a[j]<<' ';
			cout<<endl;
			swap(a[i],a[i+1]);
		}
	}
}