#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

struct point
{
	int x;
	int y;
	int n;
};

char map[30][30];

point findstart(int n,int m)
{
	bool dis=true;
	point p;
	for(int i=1;i<=m&&dis;i++)
		if(map[1][i]=='.')
			p.x=i,p.y=1,dis=false;
	for(int i=n;i<=m&&dis;i++)
		if(map[n][i]=='.')
			p.x=i,p.y=n,dis=false;
	for(int i=1;i<=n&&dis;i++)
		if(map[i][1]=='.')
			p.x=1,p.y=i,dis=false;
	for(int i=m;i<=n&&dis;i++)
		if(map[1][i]=='.')
			p.x=m,p.y=i,dis=false;
	p.n=1;
	return p;
}

int main()
{	
	int n,m;
	bool dis;
	point p,next;
	queue<point> qu;
	while(cin>>n>>m)
	{
		memset(map,'#',sizeof(map));
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>map[i][j];
		//p=findstart(n,m);
		dis=true;
		for(int i=1;i<=m&&dis;i++)
			if(map[1][i]=='.')
				p.x=i,p.y=1,dis=false;
		for(int i=1;i<=m&&dis;i++)
			if(map[n][i]=='.')
				p.x=i,p.y=n,dis=false;
		for(int i=1;i<=n&&dis;i++)
			if(map[i][1]=='.')
				p.x=1,p.y=i,dis=false;
		for(int i=1;i<=n&&dis;i++)
			if(map[i][m]=='.')
				p.x=m,p.y=i,dis=false;
		p.n=1;
		//cout<<p.x<<" "<<p.y<<endl;
		qu.push(p);
		while(qu.size()!=0)
		{
			dis=false;
			p=qu.front();
			qu.pop();
			map[p.y][p.x]='#';
			if(map[p.y+1][p.x]=='.')
			{
				next.y=p.y+1;
				next.x=p.x;
				next.n=p.n+1;
				qu.push(next);
				dis=true;
			}
			if(map[p.y-1][p.x]=='.')
			{
				next.y=p.y-1;
				next.x=p.x;
				next.n=p.n+1;
				qu.push(next);
				dis=true;
			}
			if(map[p.y][p.x+1]=='.')
			{
				next.y=p.y;
				next.x=p.x+1;
				next.n=p.n+1;
				qu.push(next);
				dis=true;
			}
			if(map[p.y][p.x-1]=='.')
			{
				next.y=p.y;
				next.x=p.x-1;
				next.n=p.n+1;
				qu.push(next);
				dis=true;
			}
			if(!dis)
				cout<<p.y<<" "<<p.x<<endl;
		}
	}
}

/*
7 9
#########
##.....##
##.###.##
##.#...##
##.#.##..
#..#....#
#########

7 9
######.##
##.....##
##.####.#
##.#....#
##.#.##.#
#..#....#
#########
*/







