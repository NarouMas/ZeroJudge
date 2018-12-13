#include<iostream>
#include<cmath>
#define size 10000000000
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
	setprime();
	char a[11];
	int n,ans,num[10];
	while(cin>>a)
	{
		n=int(a[0]-'0');
		ans=0;
		for(int i=0;i<10;i++)
		{
			if(!prime[n])
			{
				num[ans]=n;
				ans++;
				if(i!=9)
					n=int(a[i+1]-'0');		
			}
			else
			{
				if(i!=9)
					n=n*10+int(a[i+1]-'0');
			}
		}
		cout<<ans<<endl;
		for(int i=0;i<ans;i++)
			cout<<num[i]<<endl;
	}
}
