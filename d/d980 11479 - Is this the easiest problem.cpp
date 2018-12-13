#include<iostream>
using namespace std;

int main()
{
	long long a,b,c,t;
	while(cin>>t)
	{
		for(int i=1;i<=t;i++)
		{
			cin>>a>>b>>c;
			cout<<"Case "<<i;
			if(a>0&&b>0&&c>0)
			{
				if(a+b>c&&b+c>a&&a+c>b)
				{
					if(a==b&&b==c)
						cout<<": Equilateral\n";
					else if(a!=b&&b!=c&&a!=c)
						cout<<": Scalene\n";
					else
						cout<<": Isosceles\n";
				}
				else
					cout<<": Invalid\n";
			}
			else
				cout<<": Invalid\n";
		}
	}
}
