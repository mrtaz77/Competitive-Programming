#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,flag=0;
        cin>>n;
        int a[n],d[n];
        for(int i=0; i<n; i++){
            cin>>d[i];
            if(i==0)a[i]=d[i];
            else if( a[i-1]-d[i]>=0 && a[i-1]+d[i]>=0 &&  a[i-1]-d[i]!=a[i-1]+d[i] && !flag){
                flag=1;
            }
            else if(!flag)a[i]=d[i]+a[i-1];
        }
        if(!flag)for(int i=0; i<n; i++)cout<<a[i]<<" ";
        else cout<<-1;
        cout<<endl;
    }
}