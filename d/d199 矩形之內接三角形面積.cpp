#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long a,b,c,d;
	while(cin>>a>>b>>c)
	{
		d=sqrt((a+b+c)*(a+b+c)-(4*a*c));
		cout<<d<<endl;
	}
}
