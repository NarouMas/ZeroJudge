#include<iostream>
#include<cstring>
#include<queue>
#include<iomanip>
using namespace std;

struct Point
{
	int x;
	int y;
	int n;
};

int map[105][105];

int main()
{
	Point p,next;
	queue<Point> qu;
	int a,b,n,t;
	int x_i[8]={1,-1,3,3,1,-1,-3,-3};
	int y_i[8]={3,3,1,-1,-3,-3,1,-1};
	int ex_i[8]={0,0,1,1,0,0,-1,-1};
	int ey_i[8]={1,1,0,0,-1,-1,0,0};
	while(cin>>n)
	{
		memset(map,0,sizeof(map));
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			map[99-b][a]=-1;
		}
		cin>>a>>b;
		p.x=a,p.y=99-b,p.n=1;
		map[p.y][p.x]=1;
		qu.push(p);
		cin>>a>>b;
		b=99-b;
		while(qu.size()!=0)
		{
			/*for(int i=0;i<100;i++)
			{
				for(int j=0;j<100;j++)
					cout<<setw(3)<<map[i][j];
				cout<<endl;
			}
			system("pause");*/
			p=qu.front();
			qu.pop();
			for(int k=0;k<8;k++)
			{
				if(p.x+x_i[k]>=0&&p.x+x_i[k]<=99&&p.y+y_i[k]>=0&&p.y+y_i[k]<=99&&map[p.y+y_i[k]][p.x+x_i[k]]==0&&map[p.y+ey_i[k]][p.x+ex_i[k]]!=-1)
				{
					next.x=p.x+x_i[k];
					next.y=p.y+y_i[k];
					next.n=p.n+1;
					map[p.y+y_i[k]][p.x+x_i[k]]=next.n;
					qu.push(next);
				}
			}
		}
				
		if(map[b][a]==0||map[b][a]==-1)
			cout<<"impossible\n";
		else
			cout<<map[b][a]-1<<endl;
		
	}
}
