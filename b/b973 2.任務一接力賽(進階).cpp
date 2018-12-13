#include<iostream>
#include<algorithm>
using namespace std;

struct team
{
	int ti;
	int n;
};

bool cmp(team t1,team t2)
{
	if(t1.ti!=t2.ti)
	{
		return t1.ti<t2.ti;
	}
	else
	{
		return t1.n<t2.n;
	}
}
int main()
{
	team te[100];
	int t,n,cn;
	int a,b;
	for(int i=0;i<100;i++)
		te[i].n=i,te[i].ti=0;
	while(cin>>n>>t)
	{
		cn=n;
		while(cn--)
		{
			for(int i=0;i<t;i++)
			{
				scanf("%d:%d",&a,&b);
				te[i].ti+=a*60+b;
			}
		}
		sort(te,te+t,cmp);
		for(int i=0;i<t;i++)
			cout<<te[i].n+1<<" "<<te[i].ti<<endl;
		for(int i=0;i<100;i++)
			te[i].n=i,te[i].ti=0;
	}
}
