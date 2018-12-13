#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int t;
	while(cin>>a>>b)
	{
		t=a*60+b;
		if(t>=450&&t<1020)
			cout<<"At School\n";
		else
			cout<<"Off School\n";
	}
}
