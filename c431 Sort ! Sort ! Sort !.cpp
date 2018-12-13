#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
	int c=*(int *)a;
	int d=*(int *)b;
	return c>d;
}


int main()
{
	int n,a[100],b;
	for(int i=0;i<100;i++)
		a[i]=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b);
		a[b-1]++;
	}
	//qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<100;i++)
	{
		while(a[i]!=0)
		{
			printf("%d ",i+1);
			a[i]--;
		}
			
	}
	printf("\n");
	
}
