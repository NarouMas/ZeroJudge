#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	unsigned long long x,n,m;
	while(cin>>x>>n>>m)
	{
		cout<<x<<" ";
		m--;
		for(int i=0;i<m;i++)
		{
			x=x%n;
			x=x*x%n;
			cout<<x<<" ";
		}
		cout<<"\n";
	}
}
