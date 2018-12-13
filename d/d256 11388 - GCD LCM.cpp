#include<iostream>
using namespace std;

int main()
{
	long long t,g,l;
	cin>>t;
	
	while(t--)
	{
		cin>>g>>l;
		if(l%g!=0)
			cout<<"-1\n";
		else
			cout<<g<<" "<<l<<endl;
	}
	
}
