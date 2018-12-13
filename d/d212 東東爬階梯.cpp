#include<iostream>
using namespace std;

int main()
{
	int n;
	long long a[1000];
	a[0]=1; a[1]=2;
	for(int i=2;i<1000;i++)
		a[i]=a[i-1]+a[i-2];
	while(cin>>n)
	{
		cout<<a[n-1]<<endl;
	}
}
