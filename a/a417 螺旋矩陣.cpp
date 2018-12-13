#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int t;
	int s,k;
	int x,y,tx,ty,index;
	int x_d[4]={1,0,-1,0};
	int y_d[4]={0,1,0,-1};
	while(cin>>t)
	{
		while(t--)
		{
			cin>>s>>k;
			int num[s][s];
			for(int i=0;i<s;i++)
				for(int j=0;j<s;j++)
					num[i][j]=0;
			x=-1,y=0,index=0;
			for(int i=0;i<s*s;i++)
			{
				tx=x+x_d[index];
				ty=y+y_d[index];
				if(tx<0||tx>s-1||ty<0||ty>s-1||num[ty][tx]!=0)
					index=(index+1)%4;
				x=x+x_d[index];
				y=y+y_d[index];
				num[y][x]=i+1;
				/*for(int i=0;i<s;i++)
				{
					for(int j=0;j<s;j++)
						cout<<setw(5)<<num[i][j];
					cout<<endl;
				}
				system("pause");*/
			}
			if(k==1)
				for(int i=0;i<s;i++)
				{
					for(int j=0;j<s;j++)
						cout<<setw(5)<<num[i][j];
					cout<<endl;
				}
			else
				for(int i=0;i<s;i++)
				{
					for(int j=0;j<s;j++)
						cout<<setw(5)<<num[j][i];
					cout<<endl;
				}
		}
	}
}
