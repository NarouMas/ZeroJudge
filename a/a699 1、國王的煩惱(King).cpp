#include<iostream>
#include<cmath>
using namespace std;

bool prime[700000];
void setprime()
{
	int sqrt_20000000=sqrt(700000);
	prime[0]=prime[1]=true;
	for(int i=0;i<sqrt_20000000;i++)
		if(!prime[i])
			for(int k=(700000-1)/i,j=i*k;k>=i;k--,j-=i)
				if(!prime[k])
					prime[j]=true;
}
int main()
{
	setprime();
	int n;
	while(cin>>n)
	{
		if(!prime[n])
			cout<<"It's a prime!!!\n";
		else
			cout<<"It's not a prime!!!\n";
	}
}
