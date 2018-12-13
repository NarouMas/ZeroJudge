#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n<15)
			n+=24;
		cout<<n-15<<endl;
	}
} 
