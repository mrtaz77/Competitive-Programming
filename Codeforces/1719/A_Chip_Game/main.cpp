#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int m,n;
        cin>>n>>m;
        if((m+n-1)%2)cout<<"Tonya"<<endl;
        else cout<<"Burenka"<<endl;
    }
}