#include<iostream>
using namespace std;

int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		if(k==0&&n!=0)
			cout<<"Impossib1e!\n";
		else if(n==0)
			cout<<"Ok!\n";
		else if(n%k==0)
			cout<<"Ok!\n";
		else
			cout<<"Impossib1e!\n";
	}
}
