#include<iostream>
#include<sstream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	char a[205],b[700];
	int lb,n,t;
	double x,y,pi;
	pi=acos(-1.0);
	string s;
	t=1;
	while(cin>>a)
	{
		if(a[0]=='E'&&a[1]=='N'&&a[2]=='D')
			break;
		if(t!=1)
			cout<<endl;
		lb=x=y=0;
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]>='0'&&a[i]<='9')
				b[lb]=a[i],lb++;
			else if(a[i-1]>='0'&&a[i-1]<='9'&&a[i]>='A'&&a[i]<='Z')
				b[lb]=' ',lb++,b[lb]=a[i],lb++;
			else if(a[i]>='A'&&a[i]<='Z')
				b[lb]=a[i],lb++;
			else if(a[i]==',')
				b[lb]=' ',lb++;
			else if(a[i]=='.')
				b[lb]='\0',lb++;
		}
		//cout<<"b:"<<b<<endl;
		stringstream ss(b);
		while(ss>>n>>s)
		{
			if(s=="N")
				y+=n;
			else if(s=="S")
				y-=n;
			else if(s=="E")
				x+=n;
			else if(s=="W")
				x-=n;
			else if(s=="NE")
			{
				x+=n*cos(pi/4.0);
				y+=n*cos(pi/4.0);
			}
			else if(s=="SE")
			{
				x+=n*cos(pi/4.0);
				y-=n*cos(pi/4.0);
			}
			else if(s=="SW")
			{
				x-=n*cos(pi/4.0);
				y-=n*cos(pi/4.0);
			}
			else if(s=="NW")
			{
				x-=n*cos(pi/4.0);
				y+=n*cos(pi/4.0);
			}
			//cout<<"x:"<<x<<" y:"<<y<<endl;
		}
		cout<<"Map #"<<t<<"\n"
			<<fixed<<setprecision(3)<<"The treasure is located at ("<<x<<","<<y<<").\n"
			<<"The distance to the treasure is "<<sqrt(x*x+y*y)<<".\n";
		t++;
	}
}
