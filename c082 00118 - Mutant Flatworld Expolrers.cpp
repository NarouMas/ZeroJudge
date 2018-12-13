#include<iostream>
#include<cstring>
using namespace std;

char switchstat(char,char);
bool inedge(int,int,int,int);

int main()
{
	bool map[60][60],dis;
	int xe,ye,x,y;
	char d,com[200];
	memset(map,true,sizeof(map));
	cin>>xe>>ye;
	while(cin>>x>>y>>d)
	{
		dis=true;	
		cin>>com;
		for(int i=0;com[i]!='\0'&&dis;i++)
		{
			if(com[i]=='R'||com[i]=='L')
				d=switchstat(d,com[i]);
			else if(com[i]=='F')
			{
				switch(d)
				{
					case 'N':
						if(inedge(x,y+1,xe,ye))
							y+=1;
						else if(map[x][y])
						{
							map[x][y]=false;
							cout<<x<<" "<<y<<" "<<d<<" LOST\n";
							dis=false;
						}
						break;
					case 'E':
						if(inedge(x+1,y,xe,ye))
							x+=1;
						else if(map[x][y])
						{
							map[x][y]=false;
							cout<<x<<" "<<y<<" "<<d<<" LOST\n";
							dis=false;
						}
						break;
					case 'S':
						if(inedge(x,y-1,xe,ye))
							y-=1;
						else if(map[x][y])
						{
							map[x][y]=false;
							cout<<x<<" "<<y<<" "<<d<<" LOST\n";
							dis=false;
						}
						break;
					case 'W':
						if(inedge(x-1,y,xe,ye))
							x-=1;
						else if(map[x][y])
						{
							map[x][y]=false;
							cout<<x<<" "<<y<<" "<<d<<" LOST\n";
							dis=false;
						}
						break;
				}
			}
		}
		if(dis)
			cout<<x<<" "<<y<<" "<<d<<endl;
	}
}

bool inedge(int x,int y,int ex,int ey)
{
	if(x<0||y<0)
		return false;
	else if(x>ex||y>ey)
		return false;
	return true;
}

char switchstat(char a,char b)
{
	if(b=='R')
	{
		switch(a)
		{
			case 'N': a='E';break;
			case 'E': a='S';break;
			case 'S': a='W';break;
			case 'W': a='N';break; 
		}
	}
	else if(b=='L')
	{
		switch(a)
		{
			case 'N': a='W';break;
			case 'E': a='N';break;
			case 'S': a='E';break;
			case 'W': a='S';break; 
		}
	}
	return a;
}
