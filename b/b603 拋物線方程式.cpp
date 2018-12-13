#include<iostream>
using namespace std;

int main()
{
	long double a,b,c,d,t;
	long double ca,cb,cc,cd;
	long double x1,x2,y1,y2;
	while(cin>>x1>>y1>>x2>>y2)
	{
		c=((x2-x1)*(x2-x1))/(4*(y2-y1));
		a=c*4;
		b=1;
		c=-2*x1;
		d=x1*x1;
		d+=a*y1;
		ca=a,cb=b,cc=c,cd=d;
		t=2;
		//cout<<a<<"y = "<<b<<"x^2 + "<<c<<"x + "<<d<<endl;
		while(int(a)!=a)
		{
			a=ca,b=cb,c=cc,d=cd;
			a*=t,b*=t,c*=t,d*=t;
			t++;
		}
		if(a<0)
			a*=-1,b*=-1,c*=-1,d*=-1;
		cout<<a<<"y = "<<b<<"x^2 + "<<c<<"x + "<<d<<endl;
	}
}
