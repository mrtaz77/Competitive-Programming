#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		int i=0;
		cin>>s;
		if (s[0]=='Y' || s[0]=='y')i++;
		if(s[1]=='e' || s[1]=='E')i++;
		 if(s[2]=='s' || s[2]=='S')i++;

		if(i==3)cout<<"YES"<<endl;
		else cout<<"NO\n";
	}
}