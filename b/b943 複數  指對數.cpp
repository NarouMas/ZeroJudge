#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double k,a,b,c,d;
	double r,i;
	while(cin>>k)
	{
		if(k==0)
			break;
		cin>>a>>b>>c>>d;
		if(k==1)
		{
			r=cos((log(sqrt(a*a+b*b))*d)+(atan2(b,a)*c))*pow(sqrt(a*a+b*b),c)/pow(exp(1),d*atan2(b,a));
			i=sin((log(sqrt(a*a+b*b))*d)+(atan2(b,a)*c))*pow(sqrt(a*a+b*b),c)/pow(exp(1),d*atan2(b,a));
			if(i>=0)
				cout<<fixed<<setprecision(6)<<r<<" + "<<i<<"i"<<endl;
			else
			{
				i*=-1;
				cout<<fixed<<setprecision(6)<<r<<" - "<<i<<"i"<<endl;
			}
		}
		else
		{
			r=(log(sqrt(a*a+b*b))*log(sqrt(c*c+d*d))+atan2(b,a)*atan2(d,c))/(log(sqrt(a*a+b*b))*log(sqrt(a*a+b*b))+atan2(b,a)*atan2(b,a));
			i=(log(sqrt(a*a+b*b))*atan2(d,c)-log(sqrt(c*c+d*d))*atan2(b,a))/(log(sqrt(a*a+b*b))*log(sqrt(a*a+b*b))+atan2(b,a)*atan2(b,a));
			if(i>=0)
				cout<<fixed<<setprecision(6)<<r<<" + "<<i<<"i"<<endl;
			else
			{
				i*=-1;
				cout<<fixed<<setprecision(6)<<r<<" - "<<i<<"i"<<endl;
			}
		}
	}
}
