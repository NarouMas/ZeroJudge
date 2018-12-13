#include<iostream>
#include<cstring>
using namespace std;

bool p[4999][4999];
int main()
{
	int n,r,c,t;
	int x,y,ans;
	while(cin>>t)
	{
		while(t--)
		{
			memset(p,false,sizeof(p));
			cin>>n>>r>>c;
			p[0][n/2]=true;
			ans=1,x=n/2,y=0;
			for(int i=2;i<=n*n;i++)
			{
				if(y==0&&x!=n-1)
				{
					p[n-1][x+1]=true;
					x=x+1,y=n-1;
				}
				else if(x==n-1&&y!=0)
				{
					p[y-1][0]=true;
					x=0,y=y-1;
				}
				else if(y==0&&x==n-1)
				{
					p[y+1][x]=true;
					y=y+1;
				}
				else if(y!=0&&x!=n-1)
				{
					if(!p[y-1][x+1])
					{
						p[y-1][x+1]=true;
						x=x+1,y=y-1;
					}
					else
					{
						p[y+1][x]=i;
						y=y+1;
					}
				}
				if(x==n-c&&y==r-1)
				{
					cout<<i<<endl;
					break;
				}
					
			}
			//cout<<p[r-1][n-c]<<endl;
		}
		
			
	}
}
