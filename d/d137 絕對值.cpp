#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	long long a,b,len;
	long double ans;
	char c[1000];
	bool im,dis;
	for(int i=0;i<1000;i++)
		c[i]=' ';
	while(cin>>c)
	{
		im=dis=false;
		a=b=0;
		for(int i=0;c[i]!=' ';i++)
			len=i;
		if(c[len-1]=='i')
			im=true;
		if(im)
		{
			for(int i=len-2,t=1;i>=0;i--)
			{
				if(c[i]>='0'&&c[i]<='9'&&!dis)
				{
					b+=int(c[i]-'0')*t;
					t*=10;
				}
				else if(c[i]>='0'&&c[i]<='9'&&dis)
				{
					a+=int(c[i]-'0')*t;
					t*=10;
				}
				else
				{
					dis=true;
					t=1;
				}
			}
			if(b==0)
				b=1;
		}
		else
		{
			for(int i=len-1,t=1;i>=0;i--)
			{
				if(c[i]>='0'&&c[i]<='9')
				{
					a+=int(c[i]-'0')*t;
					t*=10;
				}
			}
		}
		//cout<<"a="<<a<<" b="<<b<<endl;
		ans=sqrt(a*a+b*b);
		cout<<fixed<<setprecision(3)<<ans<<endl;
		for(int i=0;i<1000;i++)
			c[i]=' ';
	}
}
