#include<iostream>
using namespace std;

int main()
{
	int n;
	char a[200][200];
	int b[200][200];
	for(int i=0;i<200;i++)
		for(int j=0;j<200;j++)
			a[i][j]=' ';
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];
				b[i][j]=0;
			}
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]=='-')
				{
					if(a[i+1][j]=='*')
						b[i][j]++;
					if(a[i-1][j]=='*')
						b[i][j]++;
					if(a[i][j+1]=='*')
						b[i][j]++;
					if(a[i][j-1]=='*')
						b[i][j]++;
					if(a[i+1][j+1]=='*')
						b[i][j]++;
					if(a[i+1][j-1]=='*')
						b[i][j]++;
					if(a[i-1][j+1]=='*')
						b[i][j]++;
					if(a[i-1][j-1]=='*')
						b[i][j]++;
				}
			}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]=='*')
					cout<<'*';
				else if(b[i][j]==0)
					cout<<'-';
				else
					cout<<b[i][j];
			}
			cout<<endl;
		}
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				a[i][j]=' ';
	}
}
