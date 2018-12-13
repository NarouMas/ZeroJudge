#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

struct Node
{
	int x;
	int y;
	int n;
};

int map[105][105];
int re[105][105];

int main()
{
	int s,n,m,nn;
	int i_x[3]={0,-1,1};
	int i_y[3]={1,0,0};
	Node node,next;
	queue<Node> qu;
	nn=1;
	while(cin>>s>>n>>m)
	{
		memset(map,0,sizeof(map));
		memset(re,0,sizeof(re));
		node.n=-1;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
			{
				cin>>map[i][j];
			}
		for(int i=1;i<=m;i++)
			if(map[1][i]==1)
				node.x=i,node.y=1,node.n=1;
		//cout<<"a:"<<node.x<<" "<<node.y<<endl;
		qu.push(node);
		re[node.y][node.x]=1;
		while(qu.size()!=0)
		{
			node=qu.front();
			qu.pop();
			//re[node.y][node.x]=node.n;
			if(s==1&&map[node.y-1][node.x]==1&&re[node.y-1][node.x]==0)
			{
				next.y=node.y-1;
				next.x=node.x;
				next.n=node.n+1;
				re[node.y-1][node.x]=next.n;
				//cout<<"up y:"<<next.y<<" x:"<<next.x<<" n:"<<next.n<<endl;
				qu.push(next);
			}
			//cout<<"node: "<<"y:"<<node.y<<" x:"<<node.x<<" n:"<<node.n<<endl;
			for(int i=0;i<3;i++)
			{
				if(map[node.y+i_y[i]][node.x+i_x[i]]==1&&re[node.y+i_y[i]][node.x+i_x[i]]==0)
				{
					next.y=node.y+i_y[i];
					next.x=node.x+i_x[i];
					next.n=node.n+1;
					re[next.y][next.x]=next.n;
					//cout<<"y:"<<next.y<<" x:"<<next.x<<" n:"<<next.n<<endl;
					qu.push(next);
				}
			}
		}
		
		cout<<"Case "<<nn<<":"<<endl;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
				cout<<re[i][j]<<" ";
			cout<<endl;
		}
		nn++;
	}
}
