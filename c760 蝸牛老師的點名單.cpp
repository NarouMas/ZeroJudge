#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string s;
	char a[100];
	while(getline(cin,s))
	{
		stringstream ss(s);
		while(ss>>a)
		{
			if(a[0]<='z'&&a[0]>='a')
				a[0]-=' ';
			cout<<a<<endl;
		}
	}
}
