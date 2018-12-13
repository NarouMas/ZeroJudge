#include<stdio.h>
#include<stdlib.h>

int *fun(int a)
{
	int size=10,i=0;
	int *n=(int *) malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		n[i]=a+i;
	return n;
		
}

int main()
{
	int *a,i=0;
	a=fun(20);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("&i:%p\n",&i);
	printf("a:%p\n",a);
	//printf("&&&i:%p\n",&&&i);
}
