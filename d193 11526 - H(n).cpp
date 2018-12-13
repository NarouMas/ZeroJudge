#include<iostream>
using namespace std;

int main()
{
	int m;
	long long n,ans,t,ni;
	while(cin>>m)
	{
		while(m--)
		{
			cin>>n;
			if(n<=0)
				cout<<"0\n";
			else
			{
				ans=n;
				for(long long i=2;i<=n;i++)
				{
					t=n/i;
					ni=n/t;
					ans+=(long long) t*(ni-i+1);
					i=ni;
				}
				cout<<ans<<endl;
			}
		}
	}
}
