#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a*d==b*c)cout<<0<<endl;
        else if(a==0 || c==0)cout<<1<<endl;
        else{
            long long int q=a*d,p=b*c;
            if(q%p==0 || p%q==0)cout<<1<<endl;
            else cout<<2<<endl;  
        }
    }
}