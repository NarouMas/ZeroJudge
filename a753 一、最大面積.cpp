#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

struct Point
{
	int x;
	int y;
	int n;
};

int map[35][35];

int main()
{
	Point p,next;
	queue<Point> qu;
	int a,b,n,t,mn[10];
	int x_i[4]={1,-1,0,0};
	int y_i[4]={0,0,1,-1};
	while(cin>>a>>b)
	{
		memset(map,-1,sizeof(map));
		memset(mn,0,sizeof(mn));
		for(int i=1;i<=a;i++)
			for(int j=1;j<=b;j++)
				cin>>map[i][j];
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++)
			{
				if(map[i][j]!=-1)
				{
					p.x=i;
					p.y=j;
					p.n=map[i][j];
					map[i][j]=-1;
					t=1;
					qu.push(p);
					while(qu.size()!=0)
					{
						p=qu.front();
						qu.pop();
						for(int k=0;k<4;k++)
						{
							if(map[p.x+x_i[k]][p.y+y_i[k]]==p.n)
							{
								t++;
								next.x=p.x+x_i[k];
								next.y=p.y+y_i[k];
								next.n=p.n;
								map[p.x+x_i[k]][p.y+y_i[k]]=-1;
								qu.push(next);
							}
						}
					}
					if(t>mn[p.n])
						mn[p.n]=t;
				}
			}
		}
		cin>>n;
		while(n--)
		{
			cin>>t;
			if(mn[t]==1)
				cout<<"0\n";
			else
				cout<<mn[t]<<endl;
		}
	}
}
