#include<iostream>
#include<stack>
using namespace std;

struct Node
{
	int father;
	int child[100];
	int nd;
	bool problem;
	bool check;
};

Node node[100000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,l,q;
	int a,b;
	Node start,next;
	stack<Node> st;
	while(cin>>n>>m>>l>>q)
	{
		for(int i=1;i<=n;i++)
			node[i].father=-1,node[i].nd=0,node[i].problem=false,node[i].check=false;
		while(m--)
		{
			cin>>a>>b;
			node[a].child[node[a].nd]=b;
			node[a].nd++;
			node[b].father=a;
		}
		while(l--)
		{
			cin>>a;
			node[a].problem=true;
		}
		/*for(int i=1;i<=n;i++)
			if(node[i].father==-1)
			{
				start=node[i];
				break;
			}
		st.push(start);*/
		for(int j=1;j<=n;j++)
		{
			if(node[j].problem)
				start=node[j];
			else
				continue;
			st.push(start);
			node[j].check=true;
			while(st.size()!=0&&!st.top().check)
			{
				next=st.top();
				st.pop();
				for(int i=0;i<next.nd;i++)
				{
					node[next.child[i]].problem=true;
					st.push(node[next.child[i]]);
					node[next.child[i]].check=true;
				}
					
			}
			while(st.size()!=0)
				st.pop();
		}
		
		while(q--)
		{
			cin>>a;
			if(node[a].problem)
				cout<<"TUIHUOOOOOO\n";
			else
				cout<<"YA~~\n";
		}
	}
}
