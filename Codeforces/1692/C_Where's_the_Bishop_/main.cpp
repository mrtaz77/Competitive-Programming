#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int r,c,rtar,ctar;
		char b[8][8];
		//cin.ignore();
		for(r=0;r<8;r++)
			for(c=0;c<8;c++)cin>>b[r][c];
		for(r=0;r<8;r++)
			for(c=0;c<8;c++)
				{
					if(b[r][c]=='#'&&(r>0&&r<7)&&(c>0&&c<7))
					{
						if(b[r-1][c-1]=='#'&&b[r-1][1+c]=='#'&&b[r+1][c-1]=='#'&&b[r+1][c+1]=='#')
						{
							rtar=r+1;
							ctar=c+1;
						}
					}
				}

	cout<<rtar<<' '<<ctar<<endl;
	}
}