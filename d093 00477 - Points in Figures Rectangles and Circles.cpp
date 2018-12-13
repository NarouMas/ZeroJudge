#include<iostream>
#include<cmath>
using namespace std;

struct picture
{
	char stat;
	float x1,x2,x;
	float y1,y2,y;
	float r;
};

int main()
{
	char c;
	int f,t;
	float x,y;
	bool dis;
	picture pic[15];
	while(cin>>c)
	{
		f=0;
		while(c!='*')
		{
			if(c=='r')
			{
				pic[f].stat='r';
				cin>>pic[f].x1>>pic[f].y1>>pic[f].x2>>pic[f].y2;
			}
			else
			{
				pic[f].stat='c';
				cin>>pic[f].x>>pic[f].y>>pic[f].r;
			}
			f++;
			cin>>c;
		}
		//cout<<"f:"<<f<<endl;
		t=1;
		while(!(x==9999.9f&&y==9999.9f))
		{
			cin>>x>>y;
			//cout<<"x:"<<x<<" y:"<<y<<endl;
			if(x==9999.9f&&y==9999.9f)
			{
				//cout<<"break\n";
				break;
			}
			dis=true;
			for(int i=0;i<f;i++)
			{
				if(pic[i].stat=='r')
				{
					//cout<<"re x1:"<<pic[f].x1<<" x2:"<<pic[f].x2<<" y2:"<<pic[f].y2<<" y1"<<pic[f].y1<<endl;
					if(x>pic[i].x1&&x<pic[i].x2&&y>pic[i].y2&&y<pic[i].y1)
					{
						cout<<"Point "<<t<<" is contained in figure "<<i+1<<endl;
						dis=false;
					}
				}
				else
				{
					//cout<<"cir x:"<<pic[]
					if(sqrt((x-pic[i].x)*(x-pic[i].x)+(y-pic[i].y)*(y-pic[i].y))<pic[i].r)
					{
						cout<<"Point "<<t<<" is contained in figure "<<i+1<<endl;
						dis=false;
					}
				}
			}
			if(dis)
				cout<<"Point "<<t<<" is not contained in any figure\n";
			t++;		
		}
	}
}
