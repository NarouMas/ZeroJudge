#include<iostream>
#include<iomanip>
using namespace std;

typedef struct
{
	float d,x,y;
}dd;
int main()
{
	int a,b,c,
		d,e,f;
	float x,y;
	dd del;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		del.d=(a*e)-(b*d);
		del.x=(c*e)-(b*f);
		del.y=(a*f)-(c*d);
		
		if(del.d==0)
		{
			if(del.x==0&&del.y==0)
				cout<<"Too many\n";
			else
				cout<<"No answer\n";
		}
		else
		{
			x=del.x/del.d;
			y=del.y/del.d;
			cout<<"x="<<fixed<<setprecision(2)<<x<<endl;
			cout<<"y="<<y<<endl;
		}
	}
}
