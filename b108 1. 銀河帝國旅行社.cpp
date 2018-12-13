#include<iostream>
#include<stack>
using namespace std;

struct Node
{
	int father;
	int child[1000];
	int nd;
};

struct Point
{
	int n;
	int back;
	int stn;
};

Node node[10005];
stack<Point> st;

int main()
{
	ios::sync_with_stdio(false);
	//cin.tie(0);
	int n,a,b,stn,stmax;
	Point p,next;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			node[i].nd=0,node[i].father=-1;
		for(int i=0;i<n;i++)
		{
			while(true)
			{
				cin>>b;
				if(b==-1)
					break;
				node[b].father=i;
				node[i].child[node[i].nd]=b;
				node[i].nd++;
			}
			b=0;
			//cout<<"i:"<<i<<endl;
		}
		//cout<<"a\n";
		stmax=0;
		for(int i=0;i<n;i++)
			if(node[i].nd==0)
			{
				stn=0;
				//cout<<"start node:"<<i<<endl;
				//system("pause");
				p.n=node[i].father;
				p.back=i;
				p.stn=0;
				st.push(p);
				while(st.size()>0)
				{
					next=st.top();
					//cout<<"node:"<<next.n<<endl;
					st.pop();
					p.back=next.n;
					p.stn=next.stn+1;
					if(node[next.n].father!=-1&&next.back!=node[next.n].father)
					{
						p.n=node[next.n].father;
						st.push(p);
						//cout<<"push father:"<<node[next.n].father<<endl;
					}
						
					for(int i=0;i<node[next.n].nd;i++)
					{
						if(node[next.n].child[i]!=next.back)
						{
							p.n=node[next.n].child[i];
							st.push(p);
							//cout<<"push child:"<<node[next.n].child[i]<<endl;
						}
						
					}						
					//cout<<"size:"<<st.size()<<" next:"<<next.n<<" stn:"<<p.stn<<endl;
					//system("pause");
					if(p.stn>stmax)
						stmax=p.stn;
				}
				
				//cout<<"stn:"<<p.stn<<endl;
				//system("pause");
			}
		cout<<stmax<<"\n";
	}
}
