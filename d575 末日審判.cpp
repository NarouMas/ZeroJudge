#include<iostream>
using namespace std;

struct Point
{
	long x;
	long y;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	Point ten,p,d[4];
	long r;
	while(cin>>ten.x>>ten.y>>p.x>>p.y>>r)
	{
		d[0].x=ten.x+r,d[0].y=ten.y;
		d[1].x=ten.x,d[1].y=ten.y+r;
		d[2].x=ten.x-r,d[2].y=ten.y;
		d[3].x=ten.x,d[3].y=ten.y-r;
		
		if(p.x<=d[0].x&&p.y>=d[0].y&&p.x>=d[1].x&&p.y<=d[1].y&&p.x>=ten.x&&p.y>=ten.y&&p.x-ten.x+p.y-ten.y<=r)
			cout<<"die\n";
		else if(p.x<=d[1].x&&p.y<=d[1].y&&p.x>=d[2].x&&p.y>=d[2].y&&p.x<=ten.x&&p.y>=ten.y&&ten.x-p.x+p.y-ten.y<=r)
			cout<<"die\n";
		else if(p.x>=d[2].x&&p.y<=d[2].y&&p.x<=d[3].x&&p.y>=d[3].y&&p.x<=ten.x&&p.y<=ten.y&&ten.x-p.x+ten.y-p.y<=r)
			cout<<"die\n";
		else if(p.x>=d[3].x&&p.y>=d[3].y&&p.x<=d[0].x&&p.y<=d[0].y&&p.x>=ten.x&&p.y<=ten.y&&p.x-ten.x+ten.y-p.y<=r)
			cout<<"die\n";
		else
			cout<<"alive\n";
	}
}
