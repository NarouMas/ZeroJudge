#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long double a,b,t;
	long double pi=3.14159;
	int n;
	while(cin>>n)
	{
		a=b=0;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			a+=(t/2)*(t/2);
		}
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			b+=(t/2)*(t/2);
		}
		t=(a-b)*pi;
		if(t<0)
			t*=-1;
		cout<<fixed<<setprecision(2)<<t<<endl;
	}
}
