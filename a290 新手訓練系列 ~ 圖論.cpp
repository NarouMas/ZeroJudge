#include<iostream>
#include<cstring>
#include<deque>
#include<queue>
using namespace std;

int main()
{
	deque<int> de[1000];
	queue<int> qu;
	int n,m,a,b,tsize;
	bool dis;
	bool pass[1000];
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
			de[i].clear();
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			de[a].push_back(b);
		}
		//for(int i=1;i<=n;i++)
		//	cout<<"i:"<<i<<" size:"<<de[i].size()<<endl;
		cin>>a>>b;
		while(qu.size()!=0)
			qu.pop();
		qu.push(a);
		dis=false;
		memset(pass,false,sizeof(pass));
		pass[a]=true;
		while(qu.size()!=0)
		{
			a=qu.front();
			//cout<<"a:"<<a<<" de[a].size:"<<de[a].size()<<endl;
			qu.pop();
			if(a==b)
			{
				dis=true;
				break;
			}
			for(int i=0;i<de[a].size();i++)
				if(!pass[de[a][i]])
				{
					//cout<<"push de["<<a<<"]["<<i<<"]:"<<de[a][i]<<endl;
					qu.push(de[a][i]);
					pass[de[a][i]]=true;
				}
		}
		if(dis)
			cout<<"Yes!!!\n";
		else
			cout<<"No!!!\n";
	}
}
