#include<iostream>
using namespace std;

int main()
{
	long long a,b;
	while(cin>>a>>b)	
	{
		if(a-b<0)
			cout<<b-a<<endl;
		else
			cout<<a-b<<endl;
	}
}
