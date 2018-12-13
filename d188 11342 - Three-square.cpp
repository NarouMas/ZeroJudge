#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	double a,b,c,n;
	int t;
	bool dis;
	cin>>t;
	while(t--)
	{
		cin>>n;
		dis=false;
		for(int i=0;i*i<=n&&!dis;i++)
		{
			a=i;
			for(int j=0;j<n&&i*i+j*j<=n;j++)
			{
				b=j;
				c=sqrt(n-a*a-b*b);
				if(c==floor(c))
				{
					dis=true;
					cout<<a<<" "<<b<<" "<<c<<"\n";
					break;
				}
			}
		}
		if(!dis)
			cout<<"-1\n";
	}	
}
