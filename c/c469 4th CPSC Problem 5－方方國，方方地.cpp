#include<iostream>
using namespace std;

int main()
{
	long long a,b;
	while(cin>>a)
	{
		b=1;
		while(a>=b*b)
		{
			b++;
		}
		b--;
		cout<<a-b*b<<endl;
	}
}
