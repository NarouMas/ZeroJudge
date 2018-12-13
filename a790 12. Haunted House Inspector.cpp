#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

char map[100][100];
//int re[100][100];

struct Point
{
	int x;
	int y;
	int n;
};

int main()
{
	int r,c,n;
	int x_i[4]={1,-1,0,0};
	int y_i[4]={0,0,1,-1};
	string temp;
	bool dis;
	Point p,next;
	queue<Point> qu;
	while(cin>>r>>c>>n)
	{
		cin.ignore();
		memset(map,'#',sizeof(map));
		//memset(re,0,sizeof(re));
		for(int i=1;i<=c;i++)
		{
			temp.clear();
			getline(cin,temp);
			/*cout<<temp.size()<<endl;
			for(int j=0;j<temp.size();j++)
				cout<<temp[j];
			cout<<endl;*/
			for(int j=1;j<=r;j++)
			{
				map[i][j]=temp[j-1];
				//cout<<map[i][j];
				//if(map[i][j]=='#')
					//re[i][j]=-1;
				if(map[i][j]=='S')
				{
					p.x=i;
					p.y=j;
					p.n=1;
				}
			}
			//cout<<endl;
		}
			
		qu.push(p);
		if(p.n<n)
			map[p.x][p.y]='.';
		//re[p.x][p.y]=p.n;
		while(qu.size()!=0)
		{
			p=qu.front();
			qu.pop();
			
			for(int i=0;i<4;i++)
			{
				if(map[p.x+x_i[i]][p.y+y_i[i]]==' '||map[p.x+x_i[i]][p.y+y_i[i]]=='F')
					if(p.n<n)
					{
						next.x=p.x+x_i[i];
						next.y=p.y+y_i[i];
						next.n=p.n+1;
						if(p.n<n)
							map[next.x][next.y]='.';
						else
							map[next.x][next.y]='#';
						//re[next.x][next.y]=p.n;
						qu.push(next);
					}
			}
		}
		dis=false;
		for(int i=1;i<=c;i++)
		{
			for(int j=1;j<=r;j++)
			{
				cout<<map[i][j];
				if(map[i][j]=='F')
					dis=true;
			}
			cout<<endl;
		}
		if(!dis)
			cout<<"All Fires Extinguished!\n";
	}
}
