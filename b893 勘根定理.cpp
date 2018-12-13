#include<iostream>
#include<cmath>
using namespace std;

long double fx(int a,int b,int c, int d, int e,int f,double x)
{
	return a*pow(x,5)+b*pow(x,4)+c*pow(x,3)+d*pow(x,2)+e*x+f;
}

int main()
{
	long long int a,b,c,d,e,f;
	long double x,y;
	bool dis;
	while(cin>>a>>b>>c>>d>>e>>f)
	{
		dis=true;
		if(a==0&&a==b&&a==c&&a==d&&a==e&&a==f)
		{
			dis=false;
			cout<<"Too many... = =\"\n";
		}
		else
		{
			for(int i=-40;i<40;i++)
			{
				x=fx(a,b,c,d,e,f,i),y=fx(a,b,c,d,e,f,i+1);
				//cout<<"x:"<<x<<" y:"<<y<<endl;
				if(x*y<0)
				{
					dis=false;
					cout<<i<<" "<<i+1<<endl;
				}
				else if(x==0)
				{
					dis=false;
					cout<<i<<" "<<i<<endl;
					
					x=fx(a,b,c,d,e,f,i+0.1);
					if(x*y<0)
						cout<<i<<" "<<i+1<<endl;
				}
				else if(y==0)
				{
					dis=false;
					y=fx(a,b,c,d,e,f,i+0.9);
					if(x*y<0)
						cout<<i<<" "<<i+1<<endl;
				}
			}
		}
		if(dis)
			cout<<"N0THING! >\\\\\\<\n";
	}
}
