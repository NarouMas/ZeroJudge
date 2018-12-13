#include<iostream>
using namespace std;

int main()
{
	int l,r,ans;
	while(cin>>l>>r)
	{
		ans=0;
		for(int i=l,ci;i<=r;i++)
		{
			ci=i;
			while(ci>1)
			{
				if(ci%10==2)
					ans++;
				ci/=10;
			}
		}
		cout<<ans<<endl;
	}
}
