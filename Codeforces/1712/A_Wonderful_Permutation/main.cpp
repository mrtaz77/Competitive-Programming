#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,k,ans=0;
       cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin >> v[i];
        for(int i=1; i<=k; i++)
        {
            for(int j=0;j<k;j++)
            {
                if(i==v[j])break;
                else if(j+1==k)ans++;
            }
        }
        cout<<ans<<endl;
    }
    
}