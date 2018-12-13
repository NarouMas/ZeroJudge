#include<iostream>
#include<cstring>
using namespace std;

struct Node
{
	int father;
	bool app;
};

int main()
{
	Node node[1000];
	int a,b,m,n1,c;
	bool dis;
	c=1;
	while(cin>>a>>b)
	{
		if(a==-1&&b==-1)
			break;
		for(int i=0;i<1000;i++)
			node[i].father=-1,node[i].app=false;
		dis=-1,m=0,n1=0;
		while(a!=0)
		{
			if(a>m)
				m=a;
			if(b>m)
				m=b;
			node[a].app=true;
			node[b].app=true;
			if(node[b].father==-1)
				node[b].father=a;
			else
				n1=10;
			cin>>a>>b;
		}
		for(int i=1;i<=m;i++)
			if(node[i].father==-1&&node[i].app)
				n1++;
		if(n1==1||m==0)
			cout<<"Case "<<c<<" is a tree.\n";
		else
			cout<<"Case "<<c<<" is not a tree.\n";
		c++;
	}
}
