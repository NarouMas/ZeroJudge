#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long double t1,t2,t3,x1,x2,x3;
	while(cin>>t1>>t2>>t3>>x1>>x3)
	{
		/*t2=t1-t2;
		x3=x1-x3;
		t1=t1-t3;
		t1=t2*x3/t1;
		x2=x1-t1;*/
		x2=x1-(((t1-t2)*(x1-x3))/(t1-t3));
		cout<<fixed<<setprecision(6)<<x2<<endl;
	}
}
