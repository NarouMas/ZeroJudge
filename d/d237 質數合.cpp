#include<iostream>
#include<cmath>
#define size 3000000
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
	long long sum;
	setprime();
	sum=0;
	for(int i=2;i<=2000000;i++)
		if(!prime[i])
			sum+=i;
	cout<<sum<<endl;
}
