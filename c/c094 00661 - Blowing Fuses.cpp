#include<iostream>
using namespace std;

struct ele
{
	int n;
	int c;
	bool open;
};

int main()
{
	int n,m,c,e,max,t,r;
	bool dis;
	ele a[30];
	r=1;
	while(cin>>n>>m>>c)
	{
		if(n==0&&n==m&&n==c)
			break;
		if(r!=1)
			cout<<endl;
		dis=true;
		for(int i=0;i<n;i++)
		{
			cin>>a[i].c;
			a[i].n=i+1;
			a[i].open=false;
		}
		e=0,max=0;		
		for(int i=0;i<m;i++)
		{
			cin>>t;
			if(a[t-1].open)
			{
				a[t-1].open=false;
				e-=a[t-1].c;
			}
			else
			{
				a[t-1].open=true;
				e+=a[t-1].c;
				if(e>max)
					max=e;
			}
			if(e>c)
			{
				dis=false;
				//cout<<"Fuse was blown.\n";
			}
		}
		cout<<"Sequence "<<r<<endl;
		if(dis)
			cout<<"Fuse was not blown.\n"
				<<"Maximal power consumption was "<<max<<" amperes.\n";
		else
			cout<<"Fuse was blown.\n";
		r++;
	}
}
