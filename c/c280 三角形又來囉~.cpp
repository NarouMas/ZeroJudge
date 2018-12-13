#include<iostream>
using namespace std;

int main()
{
	int n;
	long long a[100];
	a[1]=1,a[2]=1;
	for(int i=3;i<100;i++)
		a[i]=a[i-1]+a[i-2];
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
}
