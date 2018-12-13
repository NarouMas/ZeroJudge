#include<iostream>
using namespace std;

int main()
{
	int n,k,w,p,ans;
	while(cin>>n>>k>>w)
	{
		ans=n;
		n/=k;
		p=n+n%k;
		while(n>0)
		{
			n=(n+p)/k;
			p=n+n%k;
			ans+=n*w;
			cout<<"n:"<<n<<" p:"<<p<<" ans:"<<ans<<endl;
		}
		cout<<ans<<endl;
	}
}
