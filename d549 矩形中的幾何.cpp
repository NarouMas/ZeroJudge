#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	long double a,b,c;
	while(cin>>a>>b>>c)
	{
		cout<<fixed<<setprecision(2)<<sqrt(a*a+c*c-b*b)<<endl;
	}
}
