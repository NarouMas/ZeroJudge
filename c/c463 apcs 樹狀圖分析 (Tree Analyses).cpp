#include<iostream>
#include<sstream>
#include<deque>
using namespace std;

//deque<int>tree[50000];
bool v[100000];
int tre[100000][10];
int siz[100000];
long md,h[100000],root;
/*void DFS(int x,int level)
{
	int target;
	for(int i=0;i<tree[x].size();i++)
	{
		if(level>md)
			md=level;
		target=tree[x][i];
		if(!v[target])
		{
			v[target]=true;
			//cout<<"tree:"<<tree[x][i]<<" L:"<<level<<endl;
			DFS(target,level+1);
		}
	}
}*/
void DFS2(int x,int level)
{
	int M=0,target;
	h[x]=0;
	for(int i=0;i<siz[x];i++)
	{
		if(level>md)
			md=level;
		target=tre[x][i];
		if(!v[target])
		{
			v[target]=true;
			//cout<<"tree:"<<tre[x][i]<<" L:"<<level<<endl;
			DFS2(target,level+1);
			//cout<<"tree:"<<tre[x][i]<<" h:"<<h[target]<<endl;
			
			
			if(h[target]>M)
				M=h[target];
		}
		/*if(h[target]==0)
			h[x]+=1;
		else
			h[x]+=h[target];*/
		h[x]=M+1;
		//cout<<"h["<<x<<"]:"<<h[x]<<" target:"<<target<<" h[target]:"<<h[target]<<endl;
	}
	//h[x]=M+1;
}
int main()
{
	int n,k[100],kk,H,sum;
	string s;
	while(cin>>n)
	{
		//cin.ignore();
		/*for(int i=0;i<n;i++)
		{
			tree[i].clear();
		}*/
		root=(1+n)*n/2;
		for(int i=1;i<=n;i++)
		{
			cin>>kk;
			siz[i]=kk;
			for(int j=0;j<kk;j++)
			{
				cin>>k[j];
				root-=k[j];
			}
				
			for(int j=0;j<kk;j++)
				tre[i][j]=k[j];
			//for(int j=0;j<kk;j++)
			//	tree[i].push_back(k[j]);
			/*getline(cin,s);
			stringstream ss(s);
			int kk=-1;
			while(ss>>k[++kk]);
			if(k[0]!=0)
				for(int j=0;j<=kk;j++)
					tree[i].push_back(k[j]);*/
		}
		/*for(int i=1;i<=n;i++)
		{
			cout<<"i:"<<i<<" tree:";
			for(int j=0;j<tree[i].size();j++)
				cout<<tree[i][j]<<" ";
			cout<<endl;
		}*/
		//h=H=0;
		/*for(int i=1;i<=n;i++)
		{
			md=0;
			for(int j=0;j<n;j++)
				v[j]=false;
			v[i]=true;
			//DFS(i,1);
			DFS2(i,1);
			//cout<<"i:"<<i<<" md:"<<md<<endl;
			if(md>h)
			{
				h=md;
				root=i;
			}
			H+=md;
		}*/
		for(int i=1;i<=n;i++)
			v[i]=false;
		v[root]=true;
		DFS2(root,1);
		//cout<<"hhhh:"<<endl;
		/*for(int i=1;i<=n;i++)
			cout<<"i:"<<i<<" "<<h[i]<<endl;*/
		sum=0;
		for(int i=1;i<=n;i++)
			sum+=h[i];
		cout<<root<<"\n"<<sum<<"\n";
	}
}
