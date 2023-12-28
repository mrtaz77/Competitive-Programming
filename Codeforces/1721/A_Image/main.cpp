#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<char>c;
        char temp;
        for(int i=0; i<4; i++){
            cin>>temp;
            c.insert(temp);
            if(i==1)cin.ignore();
        }
        cout<<c.size()-1<<endl;
    }
}