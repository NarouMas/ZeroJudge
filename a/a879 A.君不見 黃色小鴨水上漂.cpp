#include<iostream>
using namespace std;

int main()
{
	int t;
	int n,s,ans;
	int xi[5000],yi[5000],x,y;
	while(cin>>t)
	{
		while(t--)
		{
			ans=0;
			cin>>n>>s;
			for(int i=0;i<n;i++)
				cin>>xi[i]>>yi[i];
			cin>>x>>y;
			for(int i=0;i<n;i++)
				if((xi[i]-x)*(xi[i]-x)+(yi[i]-y)*(yi[i]-y)<=s*s)
					ans++;
			cout<<ans<<endl;		
		}
	}
}
