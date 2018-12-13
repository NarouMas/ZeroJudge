#include<iostream>
using namespace std;

int main()
{
	int n,m,ans=0;
	char c[200][200];
	while(cin>>n>>m)
	{
		for(int i=0;i<200;i++)
			for(int j=0;j<200;j++)
				c[i][j]=' ';
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>c[i][j];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(c[i][j]=='?')
				{
					ans=0;
					if(c[i+1][j]=='*')
						ans++;
					if(c[i-1][j]=='*')
						ans++;
					if(c[i][j+1]=='*')
						ans++;
					if(c[i][j-1]=='*')
						ans++;
					if(c[i+1][j+1]=='*')
						ans++;
					if(c[i+1][j-1]=='*')
						ans++;
					if(c[i-1][j+1]=='*')
						ans++;
					if(c[i-1][j-1]=='*')
						ans++;
					cout<<ans;
				}
				else
					cout<<'*';
			}
			cout<<endl;
		}
	}
}
