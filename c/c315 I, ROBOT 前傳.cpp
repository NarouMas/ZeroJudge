#include<iostream>
using namespace std;

int main()
{
	int n;
	long long a,b,x,y;
	while(cin>>n)
	{
		x=y=0;
		while(n--)
		{
			cin>>a>>b;
			switch(a)
			{
				case 0:y+=b; break;
				case 1:x+=b; break;
				case 2:y-=b; break;
				case 3:x-=b; break;
			}
		}
		cout<<x<<' '<<y<<endl;
	}
}
