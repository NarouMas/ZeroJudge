#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

char map[40][40][40];
int re[40][40][40];
int x[6]={1,-1,0,0,0,0};
int y[6]={0,0,1,-1,0,0};
int z[6]={0,0,0,0,1,-1};
struct point
{
	int l;
	int r;
	int c;
	int dis;
};
queue<point> p;
int l,r,c;
bool wall(int ll,int rr,int cc)
{
	if(ll>=1&&ll<=l&&rr>=1&&rr<=r&&cc>=1&&cc<=c)
		if(map[ll][rr][cc]=='.'||map[ll][rr][cc]=='S'||map[ll][rr][cc]=='E')
			return true;
	return false;
}
int main()
{
	point now_p,next_p,end_p;
	while(cin>>l>>r>>c)
	{
		if(l==r&&r==c&&l==0)
			break;
		for(int i=0;i<40;i++)
			for(int j=0;j<40;j++)
				for(int k=0;k<40;k++)
					re[i][j][k]=0;
		for(int i=1;i<=l;i++)
			for(int j=1;j<=r;j++)
				for(int k=1;k<=c;k++)
				{
					cin>>map[i][j][k];
					if(map[i][j][k]=='S')
						now_p.l=i,now_p.r=j,now_p.c=k,now_p.dis=1;
					else if(map[i][j][k]=='E')
						end_p.l=i,end_p.r=j,end_p.c=k;
				}	
		p.push(now_p);
		re[now_p.l][now_p.r][now_p.c]=1;
		while(p.size()>0)
		{
			next_p=p.front();
			p.pop();
			for(int i=0;i<6;i++)
			{
				if(wall(next_p.l+z[i],next_p.r+y[i],next_p.c+x[i])&&re[next_p.l+z[i]][next_p.r+y[i]][next_p.c+x[i]]==0)
				{
					now_p.l=next_p.l+z[i];
					now_p.r=next_p.r+y[i];
					now_p.c=next_p.c+x[i];
					now_p.dis=next_p.dis+1;
					re[next_p.l+z[i]][next_p.r+y[i]][next_p.c+x[i]]=now_p.dis;
					p.push(now_p);
				}
			}
		}
		if(re[end_p.l][end_p.r][end_p.c]!=0)
			cout<<"Escaped in "<<re[end_p.l][end_p.r][end_p.c]-1<<" minute(s).\n";
		else
			cout<<"Trapped!\n";
		/*for(int i=1;i<=l;i++)
		{
			for(int j=1;j<=r;j++)
			{
				for(int k=1;k<=c;k++)
				{
					if(re[i][j][k]<10)
						cout<<" "<<re[i][j][k];
					else
						cout<<re[i][j][k];
				}
					
				cout<<endl;
			}
			cout<<endl;
		}*/
			
					
	}
}
