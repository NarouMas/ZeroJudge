#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x1,x2,y1,y2;
	while(cin>>x1>>y1>>x2>>y2)
	{
		if(x1==x2&&x1==y1&&x1==y2&&x1==0)
			break;
		
		if(x1==x2&&y1==y2)
			cout<<"0\n";
		else if(x1==x2||y1==y2)
			cout<<"1\n";
		else if(abs(x1-x2)==abs(y1-y2))
			cout<<"1\n";
		else
			cout<<"2\n";
	}
}
