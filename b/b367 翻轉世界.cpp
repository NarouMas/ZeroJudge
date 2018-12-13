#include<iostream>
using namespace std;

int main()
{
	int t,n,m;
	int a[20][20];
	bool d;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>m;
			for(int i=0;i<n;i++)
				for(int j=0;j<m;j++)
					cin>>a[i][j];
			
			d=true;
			for(int i=0;i<=n/2;i++)
				for(int j=0;j<=m/2;j++)
					if(a[i][j]!=a[n-1-i][m-1-j])
					{
						d=false;
						break;
					}
			
			if(d)
				cout<<"go forward\n";
			else
				cout<<"keep defending\n";
		}
	}
}
