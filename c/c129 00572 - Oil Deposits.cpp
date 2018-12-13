#include<iostream>
using namespace std;

int m,n;
char p[500][500];

int deposit(int i,int j)
{
	int dx[8]={0,0,1,1,1,-1,-1,-1};
	int dy[8]={1,-1,1,0,-1,1,-1,0};
	if(p[i][j]=='*')
		return 0;
	else
	{
		p[i][j]='*';
		for(int l=0;l<8;l++)
		{
			if(i+dx[l]<0||j+dy[l]<0) goto left;
			else if(p[i+dx[l]][j+dy[l]]=='@') deposit(i+dx[l],j+dy[l]);
		}
	
	}
	left:	
	return 1;
}
int main()
{
	//char p[17][32];
	//int k[16][31];
	int nod;
	
	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			p[i][j]='*';
	while(cin>>m>>n)
	{
		if(m==0&&n==0)
			break;
		nod=0;
		for(int i=1;i<m+1;i++)
			for(int j=1;j<n+1;j++)
			{
				cin>>p[i][j];
			}
		for(int i=1;i<m+1;i++)
			for(int j=1;j<n+1;j++)
				nod+=deposit(i,j);	
			
		
		/*for(int i=1;i<16;i++)
		{
			for(int j=1;j<31;j++)
			{
				if(k[i][j]==-1)	cout<<"*";
				else if(k[i][j]==0)	cout<<".";
				else	cout<<k[i][j];
			}
			cout<<endl;		
		}*/
		cout<<nod<<endl;
		for(int i=1;i<m+1;i++)
				for(int j=1;j<n+1;j++)
					p[i][j]='.';
			
	}
}




