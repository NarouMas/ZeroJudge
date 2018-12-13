#include<iostream>
#include<cmath>
#define size 10000
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
	int n,c,t,l;
	setprime();
	prime[1]=false;
	while(cin>>n>>c)
	{
		t=0;
		for(int i=1;i<=n;i++)
			if(!prime[i])
				t++;
		cout<<n<<" "<<c<<": ";
		if(t%2==0)
		{
			if(2*c<=t)
			{
				l=(t-2*c)/2;
				for(int i=0,j=0,z=1;j<2*c;z++)
				{
					if(!prime[z])
						i++;
					if(i>l&&!prime[z])
					{
						cout<<z<<" ";
						j++;
					}
				}
			}
			else
			{
				for(int i=1;i<=n;i++)
					if(!prime[i])
						cout<<i<<" ";
			}
		}
		else
		{
			if(2*c-1<=t)
			{
				l=(t-2*c+1)/2;
				for(int i=0,j=1,z=1;j<2*c;z++)
				{
					if(!prime[z])
						i++;
					if(i>l&&!prime[z])
					{
						cout<<z<<" ";
						j++;
					}
				}
			}
			else
			{
				for(int i=1;i<=n;i++)
					if(!prime[i])
						cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
