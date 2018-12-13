#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> st;
	int n,a[1005],t,pushn;
	bool dis;
	while(cin>>n)
	{
		if(n==0)
			break;
		cin>>a[0];
		while(a[0]!=0)
		{
			for(int i=1;i<n;i++)
				cin>>a[i];
			while(st.size()!=0)
				st.pop();
			st.push(1);
			t=0,pushn=2,dis=true;
			while(st.size()!=0&&dis)
			{
				if(st.top()==a[t])
				{
					//cout<<"pop:"<<st.top()<<endl;
					st.pop();
					t++;
					if(st.size()==0&&pushn<=n)
					{
						//cout<<"in push:"<<pushn<<endl;
						st.push(pushn);
						pushn++;
					}
				}
				if(st.size()>0)
				{
					if(st.top()!=a[t]&&pushn<=n)
					{
						//cout<<"out push:"<<pushn<<endl;
						st.push(pushn);
						pushn++;
					}
					else if(st.top()!=a[t])
					{
						dis=false;
					}
				}
				
			}
			if(dis)
				cout<<"Yes\n";
			else
				cout<<"No\n";
			cin>>a[0];
		}
	}
}
