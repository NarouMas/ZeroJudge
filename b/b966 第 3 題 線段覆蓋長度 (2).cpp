#include<iostream>
#include<algorithm>
using namespace std;

struct line
{
	int l;
	int r;
};

bool cmp(line a,line b)
{
	if(a.l!=b.l)
		return a.l<b.l;
	else
		return a.r<b.r;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,ans,mr;
	line l[10000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>l[i].l>>l[i].r;
		sort(l,l+n,cmp);
		ans=l[0].r-l[0].l;
		mr=l[0].r;
		for(int i=1;i<n;i++)
		{
			if(l[i].l>=mr)
			{
				ans+=l[i].r-l[i].l;
				mr=l[i].r;
			}		
			else if(l[i].r>mr)
			{
				ans+=l[i].r-mr;
				mr=l[i].r;
			}
		}
		//for(int i=0;i<n;i++)
		//	cout<<l[i].l<<" "<<l[i].r<<endl;
		cout<<ans<<"\n";
	}
}
