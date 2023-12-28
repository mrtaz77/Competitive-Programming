#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        cin.ignore();
        if(n!=5)cout<<"NO\n";
        else{
            if(str.find('T')!=-1 &&str.find('i')!=-1&&str.find('m')!=-1&&str.find('u')!=-1&&str.find('r')!=-1)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}