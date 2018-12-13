#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,r,s[1000],m,ans,t;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>r;
			for(int i=0;i<r;i++)
				cin>>s[i];
			sort(s,s+r);
			m=r/2;
			ans=0;
			for(int i=0;i<r;i++)
			{
				t=s[i]-s[m];
				if(t<0)
					t*=-1;
				ans+=t;
			}
			cout<<ans<<endl;
		}
	}
}
