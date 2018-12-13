#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,b;
	while(cin>>a)
	{
		b=a;
		if(a<0)
			a=a*-1;
		cout<<fixed<<setprecision(4)<<'|'<<b<<"|="<<a<<endl;
	}
}
