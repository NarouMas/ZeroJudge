#include<iostream>
#include<queue>
#include<cstring>
#define inf 5000000
#define Size 1010 
using namespace std;

int map[Size][Size];
int d[Size][Size];
bool visit[Size][Size];
struct point
{
	int x;
	int y;
	int d;
};

bool operator<(point a,point b){ return a.d>b.d;}

void dijkstra(int sx,int sy,int n,int m)
{
	int xi[4]={1,-1,0,0};
	int yi[4]={0,0,1,-1};
	memset(d,inf,sizeof(d));
	memset(visit,false,sizeof(visit));
	point p;
	priority_queue<point> pq;
	
	d[sy][sx]=map[sy][sx];
	p.x=sx,p.y=sy,p.d=map[p.y][p.x];
	pq.push(p);
	
	for(int i=1;i<=n+3;i++)
	{
		for(int j=1;j<=m+3;j++)
		{
			int ax=-1,ay=-1;
			while(!pq.empty()&&visit[ay=pq.top().y][ax=pq.top().x])
				pq.pop();
			if(ax==-1)
				break;
			visit[ay][ax]=true;
			for(int k=0;k<4;k++)
			{
				if(!visit[ay+yi[k]][ax+xi[k]]&&d[ay][ax]+map[ay+yi[k]][ax+xi[k]]<d[ay+yi[k]][ax+xi[k]])
				{
					d[ay+yi[k]][ax+xi[k]]=d[ay][ax]+map[ay+yi[k]][ax+xi[k]];
					p.x=ax+xi[k];
					p.y=ay+yi[k];
					p.d=d[ay+yi[k]][ax+xi[k]];
					pq.push(p);
				}
			}
		}
	}
}

int main()
{
	int N,n,m;
	memset(map,inf,sizeof(map));
	while(cin>>N)
	{
		while(N--)
		{
			cin>>n>>m;
			for(int i=1;i<=n;i++)
				for(int j=1;j<=m;j++)
					cin>>map[i][j];
			dijkstra(1,1,n,m);
			/*for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)
					printf("%2d ",d[i][j]);
				cout<<endl;
			}*/
			cout<<d[n][m]<<endl;
		}
	}
}
