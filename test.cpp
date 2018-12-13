#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a[15];
	a[0]=1;a[1]=1;a[2]=4;
	for(int i=2;i<15;i++)
	{
		a[i]=a[i-1]+a[i-2];
		cout<<"i:"<<i<<" a:"<<a[i]<<"\n";
	}
}
