#include<iostream>
using namespace std;

long long a[1000001],b[1000001];
int main()
{	
	int n,t;
	a[1]=a[2]=0;
	a[3]=1,a[4]=3;
	b[3]=1,b[4]=4;
	for(int i=5;i<=1000000;i++)
	{
		a[i]=0;
		a[i]=(a[i]-b[i-2])%1000000007;
		for(int j=0;j<3;j++)
			a[i]=(a[i]+a[i-1])%1000000007;
		b[i]=(b[i-1]+a[i])%1000000007;
		
	}
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			cout<<a[n]<<endl;
		}
	}
}
