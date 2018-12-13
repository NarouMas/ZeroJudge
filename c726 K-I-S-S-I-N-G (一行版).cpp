#include<iostream>
using namespace std;

int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		cout<<s1<<" and "<<s2<<" sitting in the tree\n";
		s1.clear();
		s2.clear();
	}
}
