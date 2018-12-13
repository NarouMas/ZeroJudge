#include<iostream>
#include<sstream>
#include<queue>
#include<map>
using namespace std;

struct Node
{
	int father;
	int child[20];
	int n;
	int nd;
	bool visit;
};

int main()
{
	int n,c,ans,target;
	bool flag;
	string s,ts,fs,s1,s2;
	Node node[100],now;
	map<string,int> tree;
	map<string,int>::iterator it;
	map<string,int>::iterator fit;
	queue<Node> qu;
	while(cin>>n)
	{
		c=0;
		tree.clear();
		for(int i=0;i<100;i++)
			node[i].father=-1,node[i].nd=0,node[i].n=0,node[i].visit=false;
		cin.ignore();
		while(n--)
		{
			getline(cin,s);
			stringstream ss(s);
			ss>>fs;
			fit=tree.find(fs);
			if(fit==tree.end())
				tree[fs]=c,c++,fit=tree.find(fs);
			while(ss>>ts)
			{
				//cout<<"a";
				it=tree.find(ts);
				if(it==tree.end())
					tree[ts]=c,c++,it=tree.find(ts);
				//cout<<"b\n";
				//cout<<"fit->second:"<<fit->second<<"\n";
				node[fit->second].child[node[fit->second].nd]=it->second,node[fit->second].nd++;
				//cout<<"c";
				node[it->second].father=fit->second;
				//cout<<"d\n";
			}
		}
		cin>>s1>>s2;
		target=tree.find(s2)->second;
		while(qu.size()!=0)
			qu.pop();
		qu.push(node[tree.find(s1)->second]);
		node[tree.find(s1)->second].visit=true;
		flag=0;
		while(qu.size()!=0&&!flag)
		{
			now=qu.front();
			qu.pop();
			if(!node[now.father].visit)
			{
				if(now.father==target)
				{
					cout<<now.n+1<<"\n";
					flag=1;
					break;
				}
				node[now.father].visit=true;
				node[now.father].n=now.n+1;
				qu.push(node[now.father]);
			}
			for(int i=0;i<now.nd;i++)
			{
				if(!node[now.child[i]].visit)
				{
					if(now.child[i]==target)
					{
						cout<<now.n+1<<"\n";
						flag=1;
						break;
					}
					node[now.child[i]].visit=true;
					node[now.child[i]].n=now.n+1;
					qu.push(node[now.child[i]]);
				}
			}
		}
	}
}
