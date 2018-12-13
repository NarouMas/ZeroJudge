#include<iostream>
#include<cmath>
#define size 1000001
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
int main()
{
	int n;
	setprime();
	while(cin>>n)
	{
		if(n==0)
			break;
		if(prime[n])
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
