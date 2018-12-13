#include<iostream>
using namespace std;

int main()
{
	int n;
	unsigned long long int a[100];
	a[1]=1,a[2]=2;
	for(int i=3;i<100;i++)
		a[i]=a[i-1]+a[i-2];
	while(cin>>n)
	{
		if(n==0)
			break;
		cout<<a[n]<<endl;
	}	
}
