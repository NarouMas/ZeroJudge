#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

struct Point
{
	int x;
	int y;
};

char map[505][505];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m,n,nj,mj,t;
	Point start,next,p;
	queue<Point> qu;
	while(cin>>m>>n)
	{
		memset(map,'X',sizeof(map));
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
				cin>>map[i][j];
		nj=mj=0;
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
			{
				if(map[i][j]=='J')
				{
					nj++,t=0;
					start.x=j,start.y=i;
					qu.push(start);
					map[i][j]='X';
					while(qu.size()!=0)
					{
						t++;
						next=qu.front();
						//map[next.y][next.x]='X';
						qu.pop();
						if(map[next.y+1][next.x]=='J')
						{
							p.x=next.x;
							p.y=next.y+1;
							map[p.y][p.x]='X';
							qu.push(p);
						}
						if(map[next.y-1][next.x]=='J')
						{
							p.x=next.x;
							p.y=next.y-1;
							map[p.y][p.x]='X';
							qu.push(p);
						}
						if(map[next.y][next.x+1]=='J')
						{
							p.x=next.x+1;
							p.y=next.y;
							map[p.y][p.x]='X';
							qu.push(p);
						}
						if(map[next.y][next.x-1]=='J')
						{
							p.x=next.x-1;
							p.y=next.y;
							map[p.y][p.x]='X';
							qu.push(p);
						}
					}
					if(t>mj)
						mj=t;
				}
			}
		cout<<nj<<" "<<mj<<"\n";
	}
}
