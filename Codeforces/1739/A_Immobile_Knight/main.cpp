#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,m;
        cin>>n>>m;
        if((n==1 || m ==1)||(n==2 && m>3)||(n>3 && m==2)||(n==2 && m==2))cout<<n<<" "<<m<<endl;
        else cout<<2<<" "<<2<<endl;
    }
}