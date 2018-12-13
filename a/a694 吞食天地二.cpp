#include<iostream>
using namespace std;

int main()
{
	int n,m,t;
	long ans;
	int x1,x2,y1,y2;
	int sum[600][600];
	while(cin>>n>>m)
	{
		
		for(int i=0;i<=n;i++)
			sum[0][i]=sum[i][0]=0;
		//cin>>sum[0][0];
		for(int i=1;i<=n;i++)
		{
			cin>>t;
			sum[1][i]=sum[1][i-1]+t;
		}
		for(int i=2;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				cin>>t;
				sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+t;
			}
		while(m--)
		{
			ans=0;
			cin>>x1>>y1>>x2>>y2;
			ans=sum[x2][y2]-sum[x2][y1-1]-sum[x1-1][y2]+sum[x1-1][y1-1];
			cout<<ans<<endl;
		}
	}
}
