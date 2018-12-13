#include<iostream>
using namespace std;

int main()
{
	int n,ans,m;
	while(cin>>m)
	{
		while(m--)
		{
			cin>>n;
			ans=0;
			for(int i=2,ci;i<=n;i++)
			{
				ci=i;
				while(ci%2==0)
					ci/=2;
				while(ci%5==0)
					ci/=5;
				if(ci==1)
					ans++;
			}
			cout<<ans<<endl;
		}
		
	}
}
