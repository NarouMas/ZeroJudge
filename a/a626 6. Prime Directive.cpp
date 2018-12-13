#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int prime[100000];
void setprime()
{
	int sqrt_20000000=sqrt(100000);
	prime[0]=prime[1]=1;
	for(int i=0;i<sqrt_20000000;i++)
		if(prime[i]!=1)
			for(int k=(100000-1)/i,j=i*k;k>=i;k--,j-=i)
				if(prime[k]!=1)
					prime[j]=1;
}
int main()
{
	int n,k;
	setprime();
	while(cin>>n)
	{
		k=1;
		for(int i=2;i<=n;i++)
		{
			if(!prime[i])
			{
				cout<<setw(10)<<i;
				k++;
			}				
			if(k%6==0)
			{
				cout<<endl;
				k-=5;
			}			
		}
		if(k!=1)
			cout<<endl;
	}
}
