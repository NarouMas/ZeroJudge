#include<iostream>
#include<cmath>
#define size 1000000
using namespace std;

bool prime[size];
void setprime()
{
	int sqrt_20000000=sqrt(size);
	prime[0]=prime[1]=true;
	for(int i=0;i<sqrt_20000000;i++)
		if(!prime[i])
			for(int k=(size-1)/i,j=i*k;k>=i;k--,j-=i)
				if(!prime[k])
					prime[j]=true;
}
void de(int a);
int gcd(int a,int b);
int main()
{
	setprime();
	int n,a,b,ca,cb;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a>>b;
			ca=a,cb=b;
			de(a);
			cout<<" , ";
			cout<<gcd(a,b);
			cout<<" , ";
			if(prime[gcd(a,b)])
				cout<<"N\n";
			else 
				cout<<"Y\n";
		}
	}
}
void de(int n)
{
	int k;
	int a[10000],b[10000];
	for(int i=0;i<10000;i++)
		b[i]=0;
	
	
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
				cout<<"*";
		}
	
}
int gcd(int a,int b)
{
	int t;
	while(b)
		t=a%b,a=b,b=t;
	return a;
}
