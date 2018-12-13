#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int t,n;
	int x,y,tx,ty,index,k,l;
	float c;
	int ans[100000];
	int x_dr[4]={1,0,-1,0};
	int y_dr[4]={0,1,0,-1};
	int x_dl[4]={-1,0,1,0};
	int y_dl[4]={0,-1,0,1};
	int x_du[4]={0,1,0,-1};
	int y_du[4]={-1,0,1,0};
	int x_dd[4]={0,-1,0,1};
	int y_dd[4]={1,0,-1,0};
	while(cin>>n)
	{		
			cin>>t;
			int num[n][n];
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
					num[i][j]=0;
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
					cin>>num[i][j];
			c=0.5*n-0.5;
			if(t==0)
			{		
				x=c+1,y=c;
			}
			if(t==1)
			{
				x=c,y=c+1;
			}
			if(t==2)
			{
				x=c-1,y=c;
			}
				
			if(t==3)
			{
				x=c,y=c-1;
			}
			
			index=0,k=0,l=0;
			for(int i=0;i<n*n;i++)
			{
				//tx=x+x_d[index];
				//ty=y+y_d[index];
				//if(tx<0||tx>n-1||ty<0||ty>n-1||num[ty][tx]!=0)
				//	index=(index+1)%4;
				if(k==l/2+1)
				{
					index=(index+1)%4;
					l++;
					k=0;
				}
				if(t==0)
				{
					x=x+x_dl[index];
					y=y+y_dl[index];
				}
				if(t==1)
				{
					x=x+x_du[index];
					y=y+y_du[index];
				}
				if(t==2)
				{
					x=x+x_dr[index];
					y=y+y_dr[index];
				}
				if(t==3)
				{
					x=x+x_dd[index];
					y=y+y_dd[index];
				}
				ans[i]=num[y][x];
				
				if(i!=0)
					k++;
				
			}
			for(int i=0;i<n*n;i++)
			{
				cout<<ans[i];
			}
			cout<<endl;
			
		
	}
}
