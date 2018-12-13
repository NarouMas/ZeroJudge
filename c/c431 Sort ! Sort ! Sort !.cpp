#include<stdio.h>
#include<algorithm>
using namespace std;

int a[1048576];
int main()
{
	int n;	
	while(scanf("%d",n)!=EOF)
	{
		printf("%d\n",n);
		for(int i=0;i<n;i++)
			scanf("%d",a[i]);
		sort(a,a+n);
		for(int i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	
}

