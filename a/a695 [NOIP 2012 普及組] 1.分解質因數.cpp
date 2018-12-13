#include<iostream>
#include<cmath>
#define size 1000000
using namespace std;
bool prime[size];
long long p[size];
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

int main()
{
	setprime();
	int n=0;
	for(int i=2;i<65536;i++)
		if(!prime[i])
			p[n]=i,n++;
	while(cin>>n)
	{
		for(int i=0;p[i]*p[i]<n;i++)
			if(n%p[i]==0)
			{
				cout<<n/p[i]<<endl;
				break;
			}
	}
}
