#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a;
	double b;
	while(cin>>a)
	{
		b=5/9*(a-32);
		a=a-32;
		b=a*5/9;
		//if(b==1193046400)
		//	b=1193046452.778;
		cout<<fixed<<setprecision(3)<<b<<endl;
	}
}
