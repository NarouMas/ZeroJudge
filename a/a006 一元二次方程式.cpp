#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c;
	int d;
	while(cin>>a>>b>>c)
	{
		d=(b*b)-(4*a*c);
		if(d<0)
			cout<<"No real root\n";
		else if(d==0)
			cout<<"Two same roots x="<<((b*-1)+sqrt(d))/(a*2)<<endl;
		else
		{
			int x1,x2;
			x1=((b*-1)+sqrt(d))/(a*2);
			x2=((b*-1)-sqrt(d))/(a*2);
			cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<endl;
		}
	}
}
