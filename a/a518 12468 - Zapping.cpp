#include<iostream>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a==b&&a==-1)
			break;
		if(b>a)
			swap(a,b);
		a=a-b;
		if(a>100-a)
			a=100-a;
		cout<<a<<endl;
	}
}
