#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        if(min(sy-1,n-sx)<=d && min(sx-1,m-sy)<=d)cout<<-1<<endl;
        else cout<<n+m-2<<endl;
    }
}