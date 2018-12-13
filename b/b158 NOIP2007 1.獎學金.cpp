#include<iostream>
#include<algorithm>
using namespace std;

struct stu
{
	int n;
	int all;
	int c,m,e;
};

bool cmp(stu a,stu b)
{
	if(a.all!=b.all)
		return a.all>b.all;
	else if(a.c!=b.c)
		return a.c>b.c;
	else
		return a.n<b.n;
}

int main()
{
	int n;
	stu a[500];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i].c>>a[i].m>>a[i].e;
			a[i].n=i+1;
			a[i].all=a[i].c+a[i].e+a[i].m;
		}
		
		sort(a,a+n,cmp);
		
		for(int i=0;i<n&&i<5;i++)
			cout<<a[i].n<<" "<<a[i].all<<endl;
	}
}
