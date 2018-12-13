#include<iostream>
#include<cmath>
#define size 50000
#define psize 100000
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
int pro[psize],ans[psize];
int p[10];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,t,k,ck;
	int la,lb,lc;
	setprime();
	/*n=0,k=2;
	while(n<5500)
	{
		if(!prime[k])
		{
			cout<<"n:"<<n<<"p:"<<k<<endl;
			n++;
		}
		k++;
	}*/
	while(cin>>n)
	{
		t=0,k=2,la=0;
		for(int i=1;i<psize;i++)
			pro[i]=0,ans[i]=0;
		pro[0]=1;
		while(t<n)
		{
			if(!prime[k])
			{
				ck=k,lb=0,lc=0;
				while(ck>0)
				{
					p[lb]=ck%10;
					ck/=10;
					lb++;
				}
				lb--;
				for(int i=0;i<=lb;i++)
				{
					for(int j=0;j<=la;j++)
					{
						ans[i+j]+=pro[j]*p[i];
						if(i+j>lc)
							lc=i+j;
					}
				}
				for(int i=0;i<=lc;i++)
				{
					if(ans[i]>=10)
					{
						ans[i+1]+=ans[i]/10;
						ans[i]%=10;
						if(i==lc)
							lc++;
					}
				}
				for(int i=0;i<=lc;i++)
					pro[i]=ans[i],ans[i]=0;
				la=lc;
				t++;
			}
			k++;
		}
		for(int i=la;i>=0;i--)
		{
			cout<<pro[i];
		}		
		cout<<"\n";
	}
}
