#include<iostream>
#include<algorithm>
using namespace std;

struct object{ int w,f;};
object o[100001];

bool cmp(object a,object b)
{
	return a.w*b.f<b.w*a.f;
}

int main()
{
	int n;
	unsigned long long int ans,w;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>o[i].w;
		for(int i=0;i<n;i++)
			cin>>o[i].f;
		sort(o,o+n,cmp);
		ans=w=0;
		for(int i=0;i<n;i++)
		{
			ans+=w*o[i].f;
			w+=o[i].w;
		}
		cout<<ans<<endl;
	}
}
