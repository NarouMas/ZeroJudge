#include<iostream>
#include<cmath>
using namespace std;

bool prime[2147483648];
void setprime()
{
	int sqrt_20000000=sqrt(2147483648);
	prime[0]=prime[1]=true;
	for(int i=0;i<sqrt_20000000;i++)
		if(!prime[i])
			for(int k=(2147483648-1)/i,j=i*k;k>=i;k--,j-=i)
				if(!prime[k])
					prime[j]=true;
}

int main()
{
	setprime();
	int n;
	while(cin>>n)
	{
		if(prime[n])
			cout<<"非質數\n";
		else
		 cout<<"質數\n";
	}
}
