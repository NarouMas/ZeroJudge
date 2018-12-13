#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,x,y,z;
	int a[100000],b[100000];
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		while(m--)
		{
			cin>>x>>y>>z;
			x--,y--;
			for(int i=x,j=0;i<=y;i++,j++)
				b[j]=a[i];
			y=y-x+1;
			sort(b,b+y);
			//cout<<"b:";
			//for(int i=0;i<y;i++)
			//	cout<<b[i]<<" ";
			//cout<<endl;
			cout<<b[z-1]<<endl;
		}
	}
}
