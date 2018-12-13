#include<iostream>
using namespace std;

int main()
{
	long long a,b,c,t;
	while(cin>>a>>b>>c)
	{
		t=a*3600+b*60+c;
		c=t%60;
		t=t/60;
		b=t%60;
		t=t/60;
		a=t%24;
		if(a<10)
			cout<<"0";
		cout<<a<<':';
		if(b<10)
			cout<<"0";
		cout<<b<<':';
		if(c<10)
			cout<<"0";
		cout<<c<<endl;
		//cout<<a<<':'<<b<<':'<<c<<endl;
	}
}
