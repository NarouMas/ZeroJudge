#include<iostream>
using namespace std;

int main()
{
	int a=1,b=17;
	int m,n,um;
	while(cin>>m)
	{
		while(m--)
		{
			um=0;
			cin>>n;
			a=a%b*10;
			while(n--)
			{
				//cout<<a/b;
				if(n==0)
					cout<<a/b<<" ";
				um+=a/b;
				a=a%b*10;
			}
			cout<<um<<endl;
			a=1,b=17;
		}
	}
}
