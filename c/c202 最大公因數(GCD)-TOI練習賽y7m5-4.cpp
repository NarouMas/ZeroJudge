#include<iostream>
using namespace std;

int main()
{
	long long n,a,b,t;
	while(cin>>n)
	{
		cin>>a;
		n--;
		while(n--)
		{
			cin>>b;
			while(b)
				t=a%b,a=b,b=t;
		}
		cout<<a<<endl;
	}
}
