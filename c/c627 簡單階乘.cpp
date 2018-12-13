#include<iostream>
using namespace std;

int main()
{
	long long n,ans,t;
	t=1000000007;
	while(cin>>n)
	{
		ans=1;
		for(int i=2;i<=n;i++)
		{
			ans=(ans*i)%t;
		}
		cout<<ans<<endl;
	}
}
