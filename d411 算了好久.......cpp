#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long double n,t;
	long long m,a;
	t=2;
	while(cin>>m>>n)
	{
		a=pow(t,n);
		if(m%a==0)
			cout<<"YA!!終於算出"<<m<<"可被2的"<<n<<"次整除了!!\n";
		else
			cout<<"可惡!!算了這麼久"<<m<<"竟然無法被2的"<<n<<"次整除\n";
	}
}
