#include<iostream>
using namespace std;

int main()
{
	int a,n;
	while(cin>>a)
	{
		n=0;
		while(a>=5)
		{
			a=a/5;
			n+=a;
		}
		cout<<n<<endl;
	}
}
