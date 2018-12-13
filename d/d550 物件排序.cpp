#include<iostream>
#include<algorithm>
using namespace std;

typedef struct _s
{
	int num[200];
}s;
int n,m;
s a[10000];
bool cmp(s c,s d)
{
	for(int i=0;i<m;i++)
	{
		if(c.num[i]!=d.num[i])
			return c.num[i]<d.num[i];
		else if(i==m-1)
			return c.num[i]<d.num[i];
	}
}
int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i].num[j];
		
		sort(a,a+n,cmp);
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cout<<a[i].num[j]<<" ";
			cout<<"\n";
		}
	}	
}
