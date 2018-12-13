#include<iostream>
using namespace std;

int main()
{
	long long n;
	while(cin>>n)
	{
		if(n>0)
			cout<<"1\n";
		else if(n==0)
			cout<<"0\n";
		else
			cout<<"-1\n";
	}
}
