#include<iostream>
#include<deque>
#include<cstring>
using namespace std;

deque<int>tree[10000];
int v[100000];
int md,m;
void DFS(int x,int level)
{
	int target;
	for(int i=0;i<tree[x].size();i++)
	{
		if(level>md)
			md=level;
		target=tree[x][i];
		if(v[target]==0)
		{
			v[target]=1;
			//cout<<"tree:"<<tree[x][i]<<" L:"<<level<<endl;
			DFS(target,level+1);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,a,b;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			//v[i]=0;
			tree[i].clear();
		}
			
		for(int i=1;i<n;i++)
		{
			cin>>a>>b;
			tree[a].push_back(b);
			tree[b].push_back(a);
		}
		m=0;
		//cout<<"start:"<<endl;
		/*for(int i=0;i<n;i++)
		{
			cout<<i<<":";
			for(int j=0;j<tree[i].size();j++)
				cout<<tree[i][j]<<" ";
			cout<<endl;
		}*/
		//cout<<"end\n";
		for(int i=0;i<n;i++)
		{
			md=0;
			for(int j=0;j<n;j++)
				v[j]=0;
			v[i]=1;
			//for(int j=0;j<n;j++)
			//	cout<<v[j]<<" ";
			//cout<<endl;
			DFS(i,0);
			if(md>m)
				m=md;
			//cout<<"i:"<<i<<" md:"<<md<<endl;
		}
		cout<<m<<"\n";
	}
}
