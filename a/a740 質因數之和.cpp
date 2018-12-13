#include<iostream>
using namespace std;

int main()
{
	long long n,k;
	long long a[10000],b[10000];
	long long sum;
	for(int i=0;i<10000;i++)
		b[i]=0;
	//int sum;
	while(cin>>n)
	{
		k=0,sum=0;
		for(int i=2;i<=n;i++)
		{
			while(n%i==0)
			{
				a[k]=i;
				b[k]++;
				n=n/i;
			}
			if(b[k]!=0)
				k++;
		}
		for(int i=0;i<k;i++)
		{
			sum+=a[i]*b[i];

		}
		cout<<sum<<endl;
		
		for(int i=0;i<10000;i++)
			b[i]=0;
	}
} 
