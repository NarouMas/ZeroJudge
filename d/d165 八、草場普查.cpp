#include<iostream>
using namespace std;

int n,m,t,maxa,area;
int a[1000][1000];
void dd(int y,int x)
{
	if(a[y][x]!=0)
	{
		t+=a[y][x]-0;
		a[y][x]=0;
		dd(y,x+1);
		dd(y,x-1);
		dd(y+1,x);
		dd(y-1,x);
	}
}
void d(int y,int x)
{
	t=0;
	if(a[y][x]!=0)
	{
		area++;
		t+=a[y][x];
		a[y][x]=0;
		dd(y,x+1);
		dd(y,x-1);
		dd(y+1,x);
		dd(y-1,x);
	}
	if(t>maxa)
		maxa=t;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n>>m)
	{
	/*	for(int i=0;i<=m;i++)
			a[0][i]='0';
		for(int i=0;i<=n;i++)
			a[i][0]='0';
		for(int i=0;i<=m;i++)
			a[n+1][i]='0';
		for(int i=0;i<=n;i++)
			a[i][m+1]='0';*/
		for(int i=0;i<n+5;i++)
			for(int j=0;j<m+2;j++)
				a[i][j]=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>a[i][j];
		maxa=-1;
		area=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				d(i,j);
		cout<<area<<"\n"
			<<maxa<<"\n";
	}
}
