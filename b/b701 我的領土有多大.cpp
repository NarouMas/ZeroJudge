#include<iostream>
using namespace std;

char p[512][512];
int e,w,s,n,area;
int me,mw,ms,mn,marea;

void dd(int y,int x)
{
	if(p[y][x]=='1')
	{
		p[y][x]='0';
		area++;
		e=x,w=x,s=y,n=y;
		if(n<mn)
			mn=n;
		if(s>ms)
			ms=s;
		if(e>me)
			me=e;
		if(w<mw)
			mw=w;
		dd(y,x+1);dd(y,x-1);dd(y+1,x);dd(y-1,x);
		dd(y+1,x+1);dd(y-1,x+1);dd(y+1,x-1);dd(y-1,x-1);
	}
}
void d(int y,int x)
{
	//cout<"f\n";
	area=0;
	if(p[y][x]=='1')
	{
		p[y][x]='0';
		area++;
		e=x,w=x,s=y,n=y;
		me=e,mw=w,mn=n,ms=s;
		dd(y,x+1);dd(y,x-1);dd(y+1,x);dd(y-1,x);
		dd(y+1,x+1);dd(y-1,x+1);dd(y+1,x-1);dd(y-1,x-1);
		cout<<mw<<' '<<mn<<' '<<me<<' '<<ms<<' '<<area<<endl;
	}
	
}
int main()
{
	int x,y;
	
	while(cin>>x>>y)
	{
		for(int i=0;i<y;i++)
			for(int j=0;j<x;j++)
				cin>>p[i][j];
		area=0;
		//me=mw=ma=mn=0;
		for(int i=0;i<y;i++)
			for(int j=0;j<x;j++)
				d(i,j);
	}
}
