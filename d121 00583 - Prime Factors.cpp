#include<iostream>
#include<cmath>
#define size 1000000
using namespace std;
bool prime[size];
long long p[100000],tp;
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

bool testprime(long long n)
{
	bool dis=true;
	for(int i=0;p[i]*p[i]<=n;i++)
	{
		if(n%p[i]==0)
			dis=false;
	}
	return dis;
}

int main()
{
	long n,t,cn;
	bool dis;
	setprime();
	n=0;
	for(int i=2;i<100000;i++)
		if(!prime[i])
			p[n]=i,n++;
	while(cin>>n)
	{
		if(n==0)
			break;
		dis=false;
		if(n<0)
		{
			cout<<n<<" = -1";
			n*=-1;
			dis=true;
		}
		else
			cout<<n<<" = ";
		t=0,cn=n;
		while(n!=1)
		{
			if(p[t]*p[t]>cn)
			{
				if(!dis)
				{
					dis=true;
					cout<<n;
				}
				else
					cout<<" x "<<n;
				break;
			}
			else if(p[t]<90000)
			{
				if(n%p[t]!=0)
					t++;
				else
				{
					if(!dis)
					{
						dis=true;
						cout<<p[t];
					}
					else
						cout<<" x "<<p[t];
					n/=p[t];
				}
				tp=p[t];
			}
			else if(tp*tp>cn)
			{
				if(!dis)
				{
					dis=true;
					cout<<n;
				}
				else
					cout<<" x "<<n;
				break;
			}
			else
			{
				if(testprime(tp))
				{
					if(n%tp!=0)
						tp+=2;
					else
					{
						if(!dis)
						{
							dis=true;
							cout<<tp;
						}
						else
							cout<<" x "<<tp;
						n/=tp;
					}
				}
				else
					tp+=2;
			}
		}
		if(!dis)
			cout<<"1";
		cout<<endl;
	}
	
}
