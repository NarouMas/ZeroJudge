#include<iostream>
using namespace std;

long long p[4999][4999];
int main()
{
	int n,r,c,t;
	int x,y;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>r>>c; 
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
					p[i][j]=0;
			p[0][n/2]=1;
			x=n/2,y=0;
			for(int i=2;i<=n*n;i++)
			{
				if(y==0&&x!=n-1)
				{
					p[n-1][x+1]=i;
					x=x+1,y=n-1;
				}
				else if(x==n-1&&y!=0)
				{
					p[y-1][0]=i;
					x=0,y=y-1;
				}
				else if(y==0&&x==n-1)
				{
					p[y+1][x]=i;
					y=y+1;
				}
				else if(y!=0&&x!=n-1)
				{
					if(p[y-1][x+1]==0)
					{
						p[y-1][x+1]=i;
						x=x+1,y=y-1;
					}
					else
					{
						p[y+1][x]=i;
						y=y+1;
					}
				}
			}
			cout<<p[r-1][n-c]<<endl;
		}
		
			
	}
}
