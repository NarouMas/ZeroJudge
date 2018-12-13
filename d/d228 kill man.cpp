#include<iostream>
using namespace std;

int a[10000],ck;
int jos(int n,int m)
{
	if(n==ck)
		return 0;
	else
		return (jos(n-1,m)+m)%n;
		
}
int main()
{
	int n,m,k,ans;
	while(cin>>n>>m>>k)
	{
		//-jos(n,m);
		ck=n-k;
		ans=jos(n,m)+1-m;
		while(ans<0)
			ans+=n;
		cout<<ans<<endl;
	}
}
