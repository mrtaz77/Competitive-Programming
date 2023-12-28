#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if(n%2 && i==1)
            {
                cout<<1<<" ";
                continue;
            }
            else
            {
                cout<<i+1<<" "<<i<<" ";
                i++;
            }
        }
        cout<<endl;
    }
}