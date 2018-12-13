#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,sn;
	while(cin>>n)
	{
		if(n==0)
			break;
		sn=sqrt(n);
		if(n==sn*sn)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
}
