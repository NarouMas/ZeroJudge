#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

char map[105][105];
int re[105][105];
int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};
struct point
{
	int r;
	int c;
	int dis;
};
queue<point> p;
bool wall(int r,int c,int n)
{
	if(r>=1&&r<=n&&c>>1&&c<=n&&map[c][r]=='.')
		return true;
	else
		return false;
}
int main()
{
	int n;
	point now_p,next_p;
	while(cin>>n)
	{
		memset(re,0,sizeof(re));
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>map[i][j];
		now_p.c=now_p.r=2;
		now_p.dis=1;
		re[2][2]=1;
		p.push(now_p);
		while(p.size()>0)
		{
			next_p=p.front();
			p.pop();
			for(int i=0;i<4;i++)
			{
				if(wall(next_p.r+y[i],next_p.c+x[i],n)&&re[next_p.r+y[i]][next_p.c+x[i]]==0)
				{
					now_p.r=next_p.r+y[i];
					now_p.c=next_p.c+x[i];
					now_p.dis=next_p.dis+1;
					re[next_p.r+y[i]][next_p.c+x[i]]=next_p.dis+1;
					p.push(now_p);
				}
			}
		}
		/*for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
				cout<<re[j][i]<<" ";
			cout<<endl;
		}*/
			
		if(re[n-1][n-1]!=0)
			cout<<re[n-1][n-1]<<endl;
		else
			cout<<"No solution!\n";
	}
}
