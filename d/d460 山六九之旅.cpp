#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n<6)
			cout<<"0\n";
		else if(n<12)
			cout<<"590\n";
		else if(n<18)
			cout<<"790\n";
		else if(n<60)
			cout<<"890\n";
		else
			cout<<"399\n";
	}
}
