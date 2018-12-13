#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int x,y,n;
	float k;
	int index;
	int ix[4]={1,0,-1,0};
	int iy[4]={0,-1,0,1};
	int p[30][30];
	while(cin>>n)
	{
		k=n;
		k=k/2-0.5;
		x=y=k;
		//cout<<x<<' '<<y<<endl;
		p[y][x]=0;
		index=0;
		for(int i=1,l=0,t=1;i<n*n;i++)
		{
			x+=ix[index];
			y+=iy[index];
			l++;
			if(l==t*2||l==t)
			{
				index=(index+1)%4;
				if(l==t*2)
				{
					l=0;
					t++;
				}
				
			}
			//cout<<"x="<<x<<" y="<<y<<"i="<<i<<endl;
			p[y][x]=i;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cout<<setw(4)<<p[i][j];
			cout<<endl;
		}
	}
}
