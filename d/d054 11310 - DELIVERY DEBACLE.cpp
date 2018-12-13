#include<iostream>
using namespace std;

int main()
{
	unsigned long long int a[50];
	int n,t;
	a[1]=1,a[2]=5,a[3]=11;
	for(int i=4;i<50;i++)
		a[i]=a[i-1]+a[i-2]*4+a[i-3]*2;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			cout<<a[n]<<endl;
		}
			
	}
}
