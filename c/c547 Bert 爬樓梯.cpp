#include<iostream>
using namespace std;

int main()
{
	long long a[20000];
	int n;
	a[1]=1,a[2]=2;
	for(int i=3;i<20000;i++)
	{
		a[i]=(a[i-1]+a[i-2])%1000000007;
	}
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
}
