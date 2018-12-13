#include<iostream>
#include<cmath>
#define size 50000
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

int p[5000],ans[5000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	setprime();
	int n,t;
	n=0;
	for(int i=2;i<40000;i++)
		if(!prime[i])
			p[n]=i,n++;
	while(cin>>n)
	{
		for(int i=0;i<5000;i++)
			ans[i]=0;
		for(int i=2,j,k;i<=n;i++)
		{
			j=i,t=0,k=0;
			while(j!=1)
			{
				if(j%p[k]==0)
					ans[k]++,j/=p[k];
				else
					k++;
			}
		}
		cout<<n<<"!=";
		for(int i=0;ans[i]!=0;i++)
			cout<<ans[i]<<" ";
		cout<<"\n";
	}
}
