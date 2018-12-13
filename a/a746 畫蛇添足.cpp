#include<iostream>
using namespace std;

int main()
{
	int n,m;
	int x[1000],y[1000];
	while(cin>>n>>m)
	{
		bool a[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				a[i][j]=false;
		for(int i=0;i<m;i++)
			cin>>y[i]>>x[i];
		for(int i=0;i<m-1;i++)
		{
			if(y[i]<y[i+1])
				for(int j=y[i]-1;j<=y[i+1]-1;j++)
					a[j][x[i]-1]=true;
			else
				for(int j=y[i]-1;j>=y[i+1]-1;j--)
					a[j][x[i]-1]=true;
			if(x[i]<x[i+1])
				for(int j=x[i]-1;j<=x[i+1]-1;j++)
					a[y[i]-1][j]=true;
			else
				for(int j=x[i]-1;j>=x[i+1]-1;j--)
					a[y[i]-1][j]=true;
		}
		for(int i=0;i<n+2;i++)
			cout<<"-";
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<"|";
			for(int j=0;j<n;j++)
			{
				if(a[i][j])
					cout<<"*";
				else
					cout<<" ";
			}
			cout<<"|\n";
		}
		for(int i=0;i<n+2;i++)
			cout<<"-";
		cout<<endl;
	}
}
