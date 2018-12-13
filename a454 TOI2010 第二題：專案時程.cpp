#include<iostream>
#include<queue>
using namespace std;

struct Node
{
	int father[100];
	int child[100];
	int nd;
	int nf;
	int day;
	int sum;
	int temp_day;
	bool check;
};

struct light
{
	int n;
	int sum;
};

Node node[1000];

bool checkfather(int n)
{
	bool dis=true;
	for(int i=0;i<node[n].nf;i++)
	{
		if(!node[node[n].father[i]].check)
			dis=false;
	}
	return dis;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k,stmax,d,a,t,sum;
	light next,tn;
	queue<light> st;
	while(cin>>n)
		while(n--)
		{
			cin>>k;
			for(int i=1;i<=k;i++)
				node[i].nd=0,node[i].nf=0,node[i].check=false,node[i].temp_day=0;
			for(int i=1;i<=k;i++)
			{
				cin>>d>>a;
				node[i].day=d;
				while(a--)
				{
					cin>>t;
					node[i].child[node[i].nd]=t;
					node[i].nd++;
					node[t].father[node[t].nf]=i;
					node[t].nf++;
				}
			}
			stmax=0;
			for(int i=1;i<=k;i++)
			{
				sum=0;
				if(node[i].nf==0)
				{
					node[i].check=true;
					node[i].sum=0;
					//sum+=node[i].day;
					//if(sum>stmax)
					//	stmax=sum;
					tn.n=i;
					tn.sum=0;
					st.push(tn);
					while(st.size()!=0)
					{
						tn=st.front();
						if(node[tn.n].temp_day>tn.sum)
						{					
							tn.sum=node[tn.n].temp_day+node[tn.n].day;
							//cout<<"temp sum:"<<tn.sum<<endl;
						}	
						else
						{
							tn.sum+=node[tn.n].day;
							//cout<<"day sum:"<<tn.sum<<endl;
						}
							
						//tn.sum+=tn.day;
						if(tn.sum>stmax)
							stmax=tn.sum;
						st.pop();
						for(int j=0;j<node[tn.n].nd;j++)
						{
							if(checkfather(node[tn.n].child[j]))
							{
								node[node[tn.n].child[j]].check=true;
								//node[tn.child[j]].check=true;
								//next=node[tn.child[j]];
								next.sum=tn.sum;
								next.n=node[tn.n].child[j];
								st.push(next);
							}
							else
							{
								if(tn.sum>node[node[tn.n].child[j]].temp_day)
									node[node[tn.n].child[j]].temp_day=tn.sum;
								//cout<<"put:"<<tn.sum<<endl;
							}
						}
							
					}
				}
			}
			cout<<stmax<<"\n";
		}
}
