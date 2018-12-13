#include<iostream>
using namespace std;

int main()
{
	char a[100];
	while(cin>>a)
	{
		if(a[0]=='1'&&a[1]=='\0')
			cout<<"0\n";
		else
			cout<<"1\n";
	}
}
