#include<iostream>
#include<cmath>
#include<algorithm>
#define size 1000000
using namespace std;
bool prime[size];
int p[size],pa[size];
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
	int k,n,t;
		t=0,n=0;
	for(int i=5;i<size;i++)
		if(!prime[i])
			p[n]=i,n++;	
	/*for(int i=0;i<1000;i++)
		for(int j=i+1;j<1000;j++)
			pa[t]=(p[i]+p[j])/2,t++;
	for(int i=0;i<t;i++)
		if(!prime[pa[i]])
			p[n]=pa[i],n++;*/
	sort(p,p+n);
	while(cin>>k)
	{
		while(k--)
		{
			cin>>n;
			cout<<p[n-1]<<endl;
		}
	}
}
