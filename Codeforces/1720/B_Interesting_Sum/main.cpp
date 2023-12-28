#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        long int temp=0,a,b,c,d;
        cin>>n;
        multiset<long int>s;
        for(int i=0; i<n; i++){
            cin>>temp;
            s.insert(temp);
        }
        multiset<long int>::iterator itr;
        itr=s.begin();
        a=*itr;
        ++itr;
        b=*itr;
        itr=--s.end();
        c=*itr;
        --itr;
        d=*itr;
        cout<<d+c-a-b<<endl;
    }
}