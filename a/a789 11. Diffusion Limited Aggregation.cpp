#include<iostream>
using namespace std;

int a[13][13];
char b[13][13];
int d(int y,int x)
{
	int v[8]={a[y][x+1],a[y][x-1],a[y+1][x],a[y-1][x],a[y+1][x+1],a[y+1][x-1],a[y-1][x+1],a[y-1][x-1]};
	//cout<<'v';
	int p[8],min,t=0;
	min=a[y][x];
	for(int i=0;i<8;i++)
		if(v[i]<min)
		{
			min=v[i];
			//p[t]=i;
			//t++;
		}
	for(int i=0;i<8;i++)
		if(v[i]==min)
		{
			p[t]=i;
			t++;
		}
	/*for(int i=1;i<12;i++)
		{
			for(int j=1;j<12;j++)
				cout<<b[i][j];
			cout<<endl;
		}*/
	//system("pause");
	if(min!=a[y][x])
	{
		//cout<<min<<endl;
		for(int i=0;i<t;i++)
		switch(p[i])
		{
			case 0:if(b[y][x+1]!='*'){b[y][x+1]='*'; d(y,x+1);}break;
			case 1:if(b[y][x-1]!='*'){b[y][x-1]='*'; d(y,x-1);}break;
			case 2:if(b[y+1][x]!='*'){b[y+1][x]='*'; d(y+1,x);}break;
			case 3:if(b[y-1][x]!='*'){b[y-1][x]='*'; d(y-1,x);}break;
			case 4:if(b[y+1][x+1]!='*'){b[y+1][x+1]='*'; d(y+1,x+1);}break;
			case 5:if(b[y+1][x-1]!='*'){b[y+1][x-1]='*'; d(y+1,x-1);}break;
			case 6:if(b[y-1][x+1]!='*'){b[y-1][x+1]='*'; d(y-1,x+1);}break;
			case 7:if(b[y-1][x-1]!='*'){b[y-1][x-1]='*'; d(y-1,x-1);}break;
		}
	}
	return 0;
} 
int main()
{	
	int x,y;
	for(int i=0;i<13;i++)
		for(int j=0;j<13;j++)
		{
			a[i][j]=999;
			b[i][j]='.';
		}
			
	while(cin>>a[1][1]>>a[1][2]>>a[1][3]>>a[1][4]>>a[1][5]>>a[1][6]>>a[1][7]>>a[1][8]>>a[1][9]>>a[1][10]>>a[1][11])
	{
		for(int i=2;i<12;i++)
			for(int j=1;j<12;j++)
				cin>>a[i][j];
		while(true)
		{
			cin>>x>>y;
			if(x==-1&&y==-1)
				break;
			x++,y++;
			b[y][x]='*';
			d(y,x);
		}
		for(int i=1;i<12;i++)
		{
			for(int j=1;j<12;j++)
				cout<<b[i][j];
			cout<<endl;
		}
		for(int i=0;i<13;i++)
			for(int j=0;j<13;j++)
			{
				a[i][j]=999;
				b[i][j]='.';
			}
	}
}

