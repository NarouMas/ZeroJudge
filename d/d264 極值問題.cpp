#include<iostream>
using namespace std;

int main()
{
	long long a[3000];
	a[1]=1,a[2]=1;
	for(int i=3;i<3000;i++)
		a[i]=a[i-1]+a[i-2];
	int k;
	int m,n;
	while(cin>>k)
	{
		for(int i=1;k>=a[i];i++)
		{
			n=i;
		}
		m=n-1;
		cout<<a[m]<<" "<<a[n]<<endl;
	}
} 
