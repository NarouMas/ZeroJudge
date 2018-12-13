#include<iostream>
using namespace std;

int main()
{
	long double a,b,c,d;
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a>>b>>c>>d;
			if(a==c&&b==0&&d==0)
				cout<<"=\n";
			else if(a>c&&b==0&&d==0)
				cout<<">\n";
			else if(a<c&&b==0&&d==0)
				cout<<"<\n";
			else
				cout<<"No\n";
			/*if(b!=0||d!=0)
			{
				if(b!=d)
					cout<<"No\n";
				else
				{
					if(a>c)
						cout<<">\n";
					else if(a<c)
						cout<<"<\n";
					else
						cout<<"=\n";
				}
				
			}
			else if(a>c)
			{
				cout<<">\n";
			}
			else if(a<c)
			{
				cout<<"<\n";
			}
			else
			{
				cout<<"=\n";
			}*/
		}
	}
}
