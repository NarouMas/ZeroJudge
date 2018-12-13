#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	int x,y,z,t;
	bool dis;
	while(cin>>x>>y>>z>>t)
	{
		dis=false;
		for(a=0;a<4;a++)
		{
			b=x-a;
			c=z-a;
			d=t-b;
			if(a>=0&&a<=3&&b>=0&&b<=3&&c>=0&&c<=3&&d>=0&&d<=3)
				if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
				{
					dis=true;
					break;
				}
		}
		if(dis)
			cout<<a<<' '<<b<<endl
				<<c<<' '<<d<<endl;
		else
			cout<<"No solutions.\n";
	}
}
