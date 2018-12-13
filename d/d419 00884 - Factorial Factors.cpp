#include<iostream>
#include<cmath>
#include<iomanip>
#define size 1000000
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

int p[size],ans[size];

int main()
{
	ios::sync_with_stdio(false);
	//cin.tie(0);
	setprime();
	int n,t,sum;
	n=0;
	for(int i=2;i<size;i++)
		if(!prime[i])
			p[n]=i,n++;
	while(cin>>n)
	{
		if(n==0)
			break;
		for(int i=0;i<size;i++)
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
		for(int i=0;ans[i]!=0;i++)
			sum+=ans[i];
		cout<<sum<<endl;
		/*cout<<setw(3)<<n<<"! =";
		for(int i=0;ans[i]!=0;i++)
		{
			if(i%14==0&&i!=0&&ans[i+1]!=0)
				cout<<setw(3)<<ans[i]<<endl<<"      ";
			else
				cout<<setw(3)<<ans[i];
		}
			
		cout<<"\n";*/
	}
}
