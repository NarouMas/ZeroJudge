#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a,b,c;
	while(cin>>a>>b>>c)
	{
		if(a==0&&b==0&&c==0)
			break;
		cout<<fixed<<setprecision(2)<<a/b<<" "<<c/(a/b)<<endl;
	}
}
