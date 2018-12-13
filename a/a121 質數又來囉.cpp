#include<iostream>
#include<cmath>
using namespace std;

bool prime[100000000];
void setprime()
{
	int sqrt_20000000=sqrt(100000000);
	prime[0]=prime[1]=1;
	for(int i=0;i<sqrt_20000000;i++)
		if(prime[i]!=1)
			for(int k=(100000000-1)/i,j=i*k;k>=i;k--,j-=i)
				if(prime[k]!=1)
					prime[j]=1;
}

int main()
{
	int a,b,n;
	setprime();
	while(cin>>a>>b)
	{
		n=0;
		for(int i=a;i<=b;i++)
			if(!prime[i])
				n++;
		cout<<n<<endl;
	}
}
