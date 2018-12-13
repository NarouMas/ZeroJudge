#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long double m,n;
	while(cin>>n>>m)
	{
		cout<<int((m*log10(n))+1)<<endl;
	}
}
