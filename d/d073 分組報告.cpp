#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n%3==0)
			cout<<n/3<<endl;
		else
			cout<<n/3+1<<endl;
	}
}
