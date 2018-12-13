#include<iostream>
using namespace std;

int main()
{
	int a,b,n;
	while(cin>>a>>b>>n)
	{
		cout<<a/b<<".";
		a=a%b*10;
		while(n--)		
		{
			cout<<a/b;
			a=a%b*10;
		}
		cout<<endl;
		
	}
}
