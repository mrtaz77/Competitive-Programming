#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        long int temp,div10=-1;
        cin>>n;
        #define N n
        int a[3]={0,0,0};
        for(i = 0; i < n; i++)
        {
            cin>>temp;
            if(temp%5==0)
            {
                temp=temp+temp%10;
                if(div10==-1)
                {
                    div10=temp;
                    a[0]++;
                }
                else if(temp!=div10)a[0]+=n;
                else
                {
                    a[0]++;
                }
            }
            else if(div10==-1)
            {
                if(temp%2)temp=temp+temp%10;
                temp%=20;
                switch(temp)
                {
                    case 2:case 4:case 8:case 16:a[1]++;break;
                    default:a[2]++;break;
                }
            }
        }
      if(a[0]==n||a[1]==n||a[2]==n)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}