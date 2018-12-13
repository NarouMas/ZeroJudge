#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int t,n;
	int x,y,tx,ty,index,k,l;
	float c;
	int x_d[4]={1,0,-1,0};
	int y_d[4]={0,-1,0,1};
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			int num[n][n];
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
					num[i][j]=0;
			c=0.5*n-0.5;
			x=c-1,y=c,index=0,k=0,l=0;
			for(int i=0;i<n*n;i++)
			{
				tx=x+x_d[index];
				ty=y+y_d[index];
				//if(tx<0||tx>n-1||ty<0||ty>n-1||num[ty][tx]!=0)
				//	index=(index+1)%4;
				if(k==l/2+1)
				{
					index=(index+1)%4;
					l++;
					k=0;
				}
				x=x+x_d[index];
				y=y+y_d[index];
				num[y][x]=i+1;
				
				if(i!=0)
					k++;
				
			}
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
					cout<<setw(5)<<num[i][j];
				cout<<endl;
			}
			
		}
	}
}
