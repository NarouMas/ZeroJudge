#include<iostream>
#include<cmath>
#define size 100000
#define s2 2000000
using namespace std;
bool prime[size];
long long p[s2];
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
	int x,sum,n;
	bool dis;
	n=0;
	for(int i=2;i<size;i++)
		if(!prime[i])
		{
			p[n]=i;
			n++;
		}
	/*for(int i=size;i<2000000000;i++)
	{
		dis=true;
		for(int j=0;p[j]*p[j]<i;j++)
			if(i%p[j]==0)
			{
				dis=false;
				break;
			}
		if(dis)
			p[n]=i,n++;
	}*/
	while(cin>>x)
	{
		n=0,sum=0;
		while(x>1)
		{
			if(p[n]>65536)
			{
				sum=x;
				break;
			}
			if(x%p[n]==0)
			{
				sum+=p[n];
				x/=p[n];
			}
			else
				n++;
		}
		cout<<sum<<endl;
	}
}
