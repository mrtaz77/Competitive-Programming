#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,k;
        cin>>n>>k;
        if(k%2)
        {
            cout<<"YES"<<endl;
            for(long int i=1;i<=n-1;i+=2)cout<<i<<' '<<i+1<<endl;
        }
        else
        {
            if(k%4==0)cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(long int i=3;i<=n-1;i+=4)cout<<i<<' '<<i+1<<endl;
                for(long int i=2;i<=n;i+=4)cout<<i<<' '<<i-1<<endl;
            }
        }
    }
}