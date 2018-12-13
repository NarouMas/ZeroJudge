#include<iostream>
using namespace std;

int main()
{
	int t,n,m;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>m;
			n-=2,m-=2;
			if(n%3==0)
				n/=3;
			else
				n=(n/3)+1;
			if(m%3==0)
				m/=3;
			else
				m=(m/3)+1;
			cout<<n*m<<endl;
		}
		
	}
}
