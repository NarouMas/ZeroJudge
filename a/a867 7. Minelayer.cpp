#include<iostream>
using namespace std;

int main()
{
	char p[17][32];
	int k[16][31];
	int dx[8]={0,0,1,1,1,-1,-1,-1};
	int dy[8]={1,-1,1,0,-1,1,-1,0};
	for(int i=0;i<17;i++)
		for(int j=0;j<32;j++)
			p[i][j]='.';
	while(cin>>p[1][1])
	{
		
		for(int i=1;i<16;i++)
			for(int j=1;j<31;j++)
			{
				if(i==1&&j==1)
					int yyy;
				else
					cin>>p[i][j];
			}
				
			
		for(int i=1;i<16;i++)
			for(int j=1;j<31;j++)
			{
				k[i][j]=0;
				if(p[i][j]=='*')
					k[i][j]=-1;
				else
				{
					for(int l=0;l<8;l++)
					{
						if(p[i+dx[l]][j+dy[l]]=='*') k[i][j]++;
					}
					/*if(p[i+1][j]=='*') k[i][j]++;
					if(p[i+1][j+1]=='*') k[i][j]++;
					if(p[i][j+1]=='*') k[i][j]++;
					if(p[i-1][j]=='*') k[i][j]++;
					if(p[i][j-1]=='*') k[i][j]++;
					if(p[i-1][j-1]=='*') k[i][j]++;
					if(p[i+1][j-1]=='*') k[i][j]++;
					if(p[i-1][j+1]=='*') k[i][j]++;*/
				}
			}
		for(int i=1;i<16;i++)
		{
			for(int j=1;j<31;j++)
			{
				if(k[i][j]==-1)	cout<<"*";
				else if(k[i][j]==0)	cout<<".";
				else	cout<<k[i][j];
			}
			cout<<endl;
			
		}
		for(int i=0;i<17;i++)
				for(int j=0;j<32;j++)
					p[i][j]='.';
			
	}
}
