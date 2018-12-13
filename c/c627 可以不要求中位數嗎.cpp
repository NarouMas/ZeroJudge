#include<stdio.h>
#include<stdlib.h>

int main()
{
	long a[3],l,aa,c,m,x;
	while(scanf("%ld%ld%ld%ld%ld",&l,&x,&aa,&c,&m)!=EOF)
	{
		for(int i=0;i<3;i++)
			a[i]=x;
		for(int i=1;i<l;i++)
		{
			x=(x*aa+c)%m;
			if(x>a[2])
				a[0]=a[1],a[1]=a[2],a[2]=x;
			else if(x>a[1])
				a[2]=x;
			else if(x>a[0])
				a[0]=x;
			else
				a[2]=a[1],a[1]=a[0],a[0]=x;
			printf("%ld,%ld,%ld\n",a[0],a[1],a[2]);
		}
		printf("%ld\n",a[1]);
	}
}
