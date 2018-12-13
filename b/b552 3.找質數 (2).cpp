#include<iostream>
#include<cmath>
#define size 500000
#define size2 100000
using namespace std;
bool prime[size];
long long p[size2];
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
void setpp()
{
	int n;
	n=0;
	for(int i=0;i<size;i++)
	{
		if(!prime[i])
		{
			p[n]=i;
			n++;
		}
	}
	//cout<<"P: "<<p[n-1]<<endl;
}
int main()
{
	setprime();
	setpp();
	/*for(int i=0;i<100;i++)
		cout<<p[i]<<" ";
	cout<<endl;*/
	long long d,ans[200];
	char n[20];
	int k;
	bool dprime;
	while(cin>>n)
	{
		k=0,d=0;;
		for(int i=0;i<10;i++)
		{
			d+=int(n[i]-'0');
			dprime=true;
			//cout<<"d:"<<d<<endl;
			for(int j=0;p[j]*p[j]<=d;j++)
			{
				if(d%p[j]==0)
				{
					dprime=false;
					break;
				}
			}
			if(d==1||d==0)
				dprime=false;
			if(dprime)
			{
				ans[k]=d;
				k++,d=0;
			}
			else
				d*=10;
		}
		cout<<k<<endl;
		for(int i=0;i<k;i++)
			cout<<ans[i]<<endl;
	}
}
