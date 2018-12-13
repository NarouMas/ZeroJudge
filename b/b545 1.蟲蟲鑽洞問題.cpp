#include<iostream>
using namespace std;

char p[30][30];
int count(int,int);

int main()
{
	int r,w;
	int x,y,n;
	int re[900][2];
	bool done;
	while(cin>>r>>w)
	{
		done=true;
		for(int i=0;i<30;i++)
			for(int j=0;j<30;j++)
				p[i][j]='0';
		for(int i=1;i<=w;i++)
			for(int j=1;j<=r;j++)
				cin>>p[i][j];
		n=0;
		for(int i=1;i<=w;i++)
			for(int j=1;j<=r;j++)
				if(p[i][j]=='*'&&count(i,j)==1)
				{
					re[n][0]=j,re[n][1]=i;
					//cout<<"d:"<<i<<" "<<j<<endl;
					n++;
				}
		if(re[0][0]<re[1][0])
			x=re[0][0],y=re[0][1];
		else if(re[0][0]>re[1][0])
			x=re[1][0],y=re[1][1];
		else if(re[0][1]<re[1][1])
			x=re[0][0],y=re[0][1];
		else
			x=re[1][0],y=re[1][1];
		done=false,n=1;
		cout<<x<<" "<<y<<endl;
		re[0][0]=x,re[0][1]=y;
		while(!done)
		{
			p[y][x]='0';
			if(p[y-1][x]=='*')
				y=y-1;
			else if(p[y+1][x]=='*')
				y=y+1;
			else if(p[y][x+1]=='*')
				x=x+1;
			else if(p[y][x-1]=='*')
				x=x-1;
			else
				done=true;
			if(!done)
				re[n][0]=x,re[n][1]=y,n++;
		}
		for(int i=1;i<n-1;i++)
			if(re[i-1][0]!=re[i+1][0]&&re[i-1][1]!=re[i+1][1])
				cout<<re[i][0]<<" "<<re[i][1]<<endl;
		cout<<re[n-1][0]<<" "<<re[n-1][1]<<endl;
	}
}

int count(int y,int x)
{
	int c=0;
	if(p[y-1][x]=='*')
		c++;
	if(p[y+1][x]=='*')
		c++;
	if(p[y][x-1]=='*')
		c++;
	if(p[y][x+1]=='*')
		c++;
	//cout<<"x:"<<x<<" y:"<<y<<" c:"<<c<<endl;
	return c;
}
