#include<iostream>
#include<cmath>
#include<algorithm>
#define size 50001
using namespace std;

int dp[size][300];
int a[size];

int main()
{
	int n,m,x,y,k;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
			cin>>a[i];
		
		for(int i=1;i<=n;i++)
			dp[i][0]=a[i];
		for(int j=1;(1<<j)-1<=n;j++)
			for(int i=1;i+(1<<j)-1<=n;i++)
				dp[i][j]=max(dp[i][j-1],dp[i+(1<<(j-1))][j-1]);
		
		cin>>m;
		while(m--)
		{
			cin>>x>>y;
			if(x<y)
				swap(x,y);
			k=int(log10(y-x+1.0)/log10(2.0));
			cout<<max(dp[x][k],dp[y-(1<<k)+1][k])<<endl;;
		}
	}
	
}
