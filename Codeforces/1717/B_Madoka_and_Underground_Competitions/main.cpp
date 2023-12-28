#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,r,c,x;
        cin>>n>>k>>r>>c;
        x=(r+c)%k;
        for(int i=1; i <= n ;i++){
            for (int j = 1; j <= n ; j++) {
                if((i+j)%k==x)cout<<"X";
                else cout<<".";
            }
            cout<<endl;
        }
    }
}