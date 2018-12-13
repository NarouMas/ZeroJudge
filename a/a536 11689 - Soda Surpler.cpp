#include<iostream>
using namespace std;

int main()
{
	int n,b,k,ans,p,t;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>b>>k;
			n+=b;
			ans=p=0;
			while(n>0)
			{
				p+=n;
				n=p/k;
				ans+=n;
				p=p-(n*k);
			}
			ans+=n;
			cout<<ans<<endl;
		}
		
	}
}
