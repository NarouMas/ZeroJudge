#include<iostream>
using namespace std;

int main()
{
	int n,x,ans;
	while(cin>>n>>x)
	{
		ans=0;
		for(int i=1,ci;i<=n;i++)
		{
			ci=i;
			while(ci!=0)
			{
				if(ci%10==x)
					ans++;
				ci/=10;
			}
		}
		cout<<ans<<endl;
	}
}
