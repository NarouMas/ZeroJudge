#include<iostream>
#include<cmath>
#define size 50
using namespace std;

int main()
{
	int n,m;
	int hint[size],d[size][size];
	int ans[size],t;
	bool dis;
	while(cin>>n>>m)
	{
		for(int i=0;i<m;i++)
			cin>>hint[i];
		for(int i=0;i<n;i++)
			for(int j=0;j<m+1;j++)
				cin>>d[i][j];
		for(int i=0;i<n;i++)
		{
			t=d[i][m];
			for(int j=m;j>0;j--)
			{
				if(t>=d[i][j-1])
					ans[j-1]=1;
				else
					ans[j-1]=0;
				t=abs(d[i][j]-d[i][j-1]);
			}
			/*cout<<"ans:";
			for(int j=0;j<m;j++)
				cout<<ans[j]<<" ";
			cout<<endl;*/
			dis=true;
			for(int j=0;j<m;j++)
				if(ans[j]!=hint[j])
					dis=false;
			if(dis)
			{
				for(int j=0;j<m+1;j++)
					cout<<d[i][j]<<" ";
				cout<<endl;
				break;
			}
		}
	}
}
