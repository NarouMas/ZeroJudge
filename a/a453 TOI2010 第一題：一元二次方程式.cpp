#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	double a,b,c;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a>>b>>c;
			if(sqrt(b*b-4*a*c)==int(sqrt(b*b-4*a*c)))
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
}
