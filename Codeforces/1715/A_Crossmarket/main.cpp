#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m==1&&n==1)cout<<0<<endl;
        else cout<<min(2*n+m-2,2*m+n-2)<<endl;
    }
}