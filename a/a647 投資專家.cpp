#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	double m,p;
	double b;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>m>>p;
			b=(p-m)/m*100;
			if(b>=0)
			{
				b+=0.00001;				
				//cout<<fixed<<setprecision(2)<<b<<"% keep"<<endl;
			}
			else if(b<0)
			{
				b-=0.00001;				
			}
			if(b<10&&b>-7)
				cout<<fixed<<setprecision(2)<<b<<"% keep"<<endl;
			else
				cout<<fixed<<setprecision(2)<<b<<"% dispose"<<endl;
		}
	}
}
