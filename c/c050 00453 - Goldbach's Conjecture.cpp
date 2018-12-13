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
int main()
{
	int n,a,b;
	bool d;
	setprime();
	while(cin>>n)
	{
		if(n==0)
			break;
		d=true;
		for(int i=3;i<=n/2;i++)
		{
			if(!prime[i]&&!prime[n-i])
			{
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				d=false;
				break;
			}
		}
		if(d)
			cout<<"Goldbach's conjecture is wrong.\n";
	}
}
