#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        if(n>m)cout<<"No"<<endl;
        else if(m%n==0){
            cout<<"Yes"<<endl;
            for(long long i=0;i<n;i++){
                cout<<m/n<<' ';
            }
            cout<<endl;
        }
        else if(n%2){
            cout<<"Yes"<<endl;
            for(long long i=0;i<n-1;i++)cout<<1<<' ';
            cout<<m-(n-1)<<endl;
        }
        else if(m%2==0){
            cout<<"Yes"<<endl;
            for(long long j=0;j<n-2;j++)cout<<1<<' ';
            cout<<(m-n+2)/2<<' '<<(m-n+2)/2<<endl;
        }
        else cout<<"No"<<endl;
    }
}