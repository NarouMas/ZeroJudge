#include<iostream>
using namespace std;

int main()
{
	int n,m,ans,t;
	int w[20000];
	bool d;
	while(cin>>n>>m)
	{
		ans=0,d=true;
		for(int i=0;i<n;i++)
			cin>>w[i];
		t=m;
		while(d)
		{
			/*cout<<"ans:"<<ans<<"  ";
			for(int i=0;i<n;i++)
				cout<<w[i]<<" ";
			cout<<endl;*/
			for(int i=0;i<m;i++)
			{
				w[i]-=1;
				if(w[i]==0&&t<n)
				{
					w[i]=w[t];
					t++;
				}
			}
			d=false;
			for(int i=0;i<m;i++)
			{
				if(w[i]>0)
					d=true;
			}
			ans++;
		}
		cout<<ans<<endl;
	}
}
