#include<iostream>
using namespace std;

int main()
{
	long long a,b;
	long long t;
	while(cin>>a>>b)
	{
		t=a;
		while(b%2==0)
		{
			a=a*a;
			b/=2;
		}
		for(int i=1;i<b;i++)
			a*=t;
		if(b==0)
			a=1; 
		cout<<a<<endl;
	}
}
