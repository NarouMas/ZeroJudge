#include<iostream>
using namespace std;

//int p[30001][30001];
int main()
{
	int n,x,y,index;
	int tx,ty,xx,yy;
	int xi[4]={1,0,-1,0};
	int yi[4]={0,1,0,-1};
	while(cin>>n>>y>>x)
	{
		//int p[n+2][n+2];
		//for(int i=0;i<30000;i++)
		//	for(int j=0;j<30000;j++)
		//		p[i][j]=0;
		index=0;
		xx=yy=1;
		for(int i=2;i<=n*n;i++)
		{
			//tx=xx+xi[index];
			//ty=yy+yi[index];
			//if(tx>n||tx<1||ty>n||ty<1||p[ty][tx]!=0)
			//	index=(index+1)%4;
			xx=xx+xi[index];
			yy=yy+yi[index];
			//p[yy][xx]=i;
		}
		/*for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
				cout<<p[i][j]<<"   ";
			cout<<endl;	
		}*/
		cout<<p[y][x]<<endl; 
	}
}
