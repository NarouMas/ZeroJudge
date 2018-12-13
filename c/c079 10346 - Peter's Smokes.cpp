#include<iostream>
using namespace std;

int main()
{
	int n,k,ans,p;
	while(cin>>n>>k)
	{
		ans=p=0;
		while(n>0)
		{
			ans+=n;
			p+=n;
			n=p/k;
			p=p-(n*k);
		}
		ans+=n;
		cout<<ans<<endl;
	}
}
