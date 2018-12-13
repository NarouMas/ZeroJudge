#include<iostream>
using namespace std;

int main()
{
	int n,c,a;
	while(cin>>n)
	{
		a=1;
		c=1;
		while(a!=0)
		{
			a*=10;
			a++;
			a%=n;
			c++;
		}
		if(n==1)
			c--;
		cout<<c<<endl;
	}
}
