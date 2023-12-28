#include<stdio.h>
#include<string.h>
char a[49],ans[1000];
int main()
{
	int t,i,j;
	char c;
	for(i=0;i<1000;i++)ans[i]=-1;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s\n%c",a,&c);
		for(j=0;a[j]!='\0';j++)
		{
			if(a[j]==c && (j%2==0))
			{
				ans[i]=j;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		if(ans[i]!=-1)printf("YES\n");
		else printf("NO\n");
	}
}