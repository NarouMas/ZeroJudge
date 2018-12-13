#include<iostream>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s))
	{
		cout<<"Go, "<<s<<", go go\n";
		s.clear();
	}
}
