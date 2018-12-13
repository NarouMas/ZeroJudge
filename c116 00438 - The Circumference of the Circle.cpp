#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	long double x1,x2,x3,y1,y2,y3,a,b,c,A,r,s,ans;
	long double pi=acos(-1);
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
	{
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		s=(a+b+c)/2.0;
		A=sqrt(s*(s-a)*(s-b)*(s-c));
		r=2*a*b*c/(4.0*A);
		ans=r*pi;
		//cout<<a<<" "<<b<<" "<<c<<" "<<s<<" "<<A<<" "<<r<<" "<<ans<<"\n";
		cout<<fixed<<setprecision(2)<<ans<<"\n";
	}
}
