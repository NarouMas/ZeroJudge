#include<iostream>
using namespace std;

int main()
{
	long long a,b,c;
	long long s;
	while(cin>>a>>b>>c)
	{
		s=(a+b+c)/2;
		cout<<s*(s-a)*(s-b)*(s-c)<<endl;
	}
}
