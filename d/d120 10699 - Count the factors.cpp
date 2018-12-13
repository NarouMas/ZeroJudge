#include<iostream>
#include<cmath>
using namespace std;

bool prime[1000001];
void setprime()
{
	int sqrt_20000000=sqrt(1000001);
	prime[0]=prime[1]=true;
	for(int i=0;i<sqrt_20000000;i++)
		if(!prime[i])
			for(int k=(1000001-1)/i,j=i*k;k>=i;k--,j-=i)
				if(!prime[k])
					prime[j]=true;
}
int main()
{
	int n,ans;
	setprime();
	while(cin>>n)
	{
		if(n==0)
			break;
		ans=0;
		for(int i=2;i<=n;i++)
		{
			if(!prime[i]&&n%i==0)
			ans++;
		}
		cout<<n<<" : "<<ans<<endl;
	}
}
