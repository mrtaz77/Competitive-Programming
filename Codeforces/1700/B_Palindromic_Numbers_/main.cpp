#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	int dig,carry=0;
	cin>>t;
	while(t--)
	{
		cin>>dig;
		cin.ignore();
		vector<int> n,a(dig-1,1);
		a.push_back(2);
		for(i=0;i<dig;i++)n.push_back((int)(getchar()-'0'));
		if(n[0]!=9)for(i=0;i<dig;i++)cout<<9-n[i];
		else
		{
			for(i=dig-1;i>=0;i--)
			{
				n[i]=(a[i]+9-n[i])%10;
				if(a[i]+9-n[i]>9)a[i-1]++;
			}
			for(i=0;i<dig;i++)cout<<n[i];
		}
		cout<<endl;
	}
}