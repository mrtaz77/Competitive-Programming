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
        string s1,s2;
        cin>>s1>>s2;
        cin.ignore();
        bool check = true;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                if(s1[i]=='R' || s2[i]=='R'){
                check=false;
                break;
                }
            }
        }

        if(check)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}