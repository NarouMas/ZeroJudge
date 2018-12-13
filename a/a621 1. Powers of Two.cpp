#include<iostream>
using namespace std;

int main()
{
	long long n,a[100];
	a[0]=1;
	for(int i=1;i<100;i++)
		a[i]=a[i-1]*2;
	while(cin>>n)
	{
		a[0]=1;
		for(int i=0;i<=n;i++)
			cout<<"2^"<<i<<" = "<<a[i]<<endl;
	}
}
