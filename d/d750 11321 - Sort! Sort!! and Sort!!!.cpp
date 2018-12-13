#include<iostream>
#include<algorithm>
using namespace std;

struct num
{
	int oe;
	int mod;
	int n;
};

bool cmp(num a,num b)
{
	if(a.mod!=b.mod)
		return a.mod<b.mod;
	else if(a.oe!=b.oe)
		return a.oe<b.oe;
	else if(a.oe==0)
		return a.n>b.n;
	else
		return a.n<b.n;
}
int main()
{
	int n,m;
	num k[10000];
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		for(int i=0;i<n;i++)
		{
			cin>>k[i].n;
			if(k[i].n>=0)
			{
				if(k[i].n%2==0)
					k[i].oe=1;
				else
					k[i].oe=0;
				k[i].mod=k[i].n%m;
			}
			else
			{
				if(k[i].n*-1%2==0)
					k[i].oe=1;
				else
					k[i].oe=0;
				k[i].mod=(k[i].n*-1)%m*-1;
			}
		}
		sort(k,k+n,cmp);
		cout<<n<<" "<<m<<endl;
		for(int i=0;i<n;i++)
			cout<<k[i].n<<endl;
	}
	cout<<"0 0\n";
}
