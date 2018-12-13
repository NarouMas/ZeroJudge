#include<iostream>
using namespace std;

int main()
{
	int n,k;
	int a[10000],b[10000];
	for(int i=0;i<10000;i++)
		b[i]=0;
	while(cin>>n)
	{
		k=0;
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
			if(b[i]==1)
				cout<<a[i];
			else
				cout<<a[i]<<"^"<<b[i];
			if(i!=k-1)
				cout<<" * ";
		}
		cout<<endl;
		
		for(int i=0;i<10000;i++)
			b[i]=0;
	}
} 
