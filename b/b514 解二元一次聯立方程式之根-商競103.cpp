#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f;
	int n;
	int xd,dx,dy;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a>>b>>c>>d>>e>>f;
			xd=a*e-b*d;
			dx=c*e-b*f;
			dy=a*f-c*d;
			cout<<dx/xd<<" "<<dy/xd<<endl;
		}
	}
} 
