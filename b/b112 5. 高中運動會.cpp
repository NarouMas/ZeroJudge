#include<iostream>
using namespace std;

int main()
{
	int a,b,t,n;
	while(cin>>n)
	{
		cin>>a;
		while(--n)
		{
			cin>>b;
			while(b)
		t=a%b,a=b,b=t;
		}
		
		cout<<a<<endl;	
	}
}
