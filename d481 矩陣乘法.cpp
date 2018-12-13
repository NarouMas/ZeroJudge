#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ar,ac,br,bc,i,j,k;
	long long int a[100][100],b[100][100];
	long long int ans[100][100];
	while(scanf("%d %d %d %d",&ar,&ac,&br,&bc)!=EOF)
	{
		if(ac!=br)
		{
			printf("Error\n");
			continue;
		}
		for(i=0;i<ar;i++)
			for(j=0;j<ac;j++)
				scanf("%lld",&a[i][j]);
		for(i=0;i<br;i++)
			for(j=0;j<bc;j++)
				scanf("%lld",&b[i][j]);
		for(i=0;i<bc;i++)
		{
			for(j=0;j<ar;j++)
			{
				ans[j][i]=0;
				for(k=0;k<ac;k++)
				{
					ans[j][i]+=a[j][k]*b[k][i];
				}
			}
		}
		for(i=0;i<ar;i++)
		{
			for(j=0;j<bc;j++)
			{
				if(j!=bc-1)
					printf("%lld ",ans[i][j]);
				else
					printf("%lld\n",ans[i][j]);
			}
		}
	}
}
