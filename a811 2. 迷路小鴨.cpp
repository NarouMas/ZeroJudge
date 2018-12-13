#include<iostream>
#include<algorithm>
using namespace std;

long long gcd(long a,long b)
{
	long long t;
	while(b)
		t=a%b,a=b,b=t;
	return a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	long long num[10005],dif[10005],ans;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cin>>num[i];
			}
			sort(num,num+n);
			for(int i=1;i<n;i++)
				dif[i-1]=num[i]-num[i-1];
			ans=dif[0];
			for(int i=1;i<n-1;i++)
			{
				ans=gcd(ans,dif[i]);
			}
			cout<<ans<<"\n";
		}
	}
}
