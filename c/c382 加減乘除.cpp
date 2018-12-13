#include<iostream>
using namespace std;

int main()
{
	long long a,b;
	char c;
	while(cin>>a>>c>>b)
	{
		if(c=='+')
			cout<<a+b<<endl;
		if(c=='-')
			cout<<a-b<<endl;
		if(c=='*')
			cout<<a*b<<endl;
		if(c=='/')
			cout<<a/b<<endl;
	}
}
