#include<iostream>
#include<cmath>
#define size 1000001
using namespace std;
bool prime[size],dprime[size];
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
void setdprime()
{
	int a;
	for(int i=0,ci=0;i<=size;i++)
	{
		if(!prime[i])
		{
			a=0;
			ci=i;
			while(ci>0)
			a+=ci%10,ci/=10;
			if(!prime[a])
				dprime[i]=true;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	setprime();
	setdprime();
	int n,t1,t2,a,ans;
	while(cin>>n)
	{
		while(n--)
		{
			ans=0;
			cin>>t1>>t2;
			for(int i=t1;i<=t2;i++)
				if(dprime[i])
					ans++;
			cout<<ans<<endl;
		}
	}
}
