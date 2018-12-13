#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct tri
{
	int a;
	int n;
	long double lo;
};
bool cmp(tri a,tri b)
{
	return a.lo>b.lo;
}
int main()
{
	tri p[10000];
	int t;
	t=0;
	while(cin>>p[t].a>>p[t].n)
	{
		p[t].lo=p[t].n*log10(p[t].a);
		t++;
	}
	sort(p,p+t,cmp);
	for(int i=0;i<t;i++)
		cout<<p[i].a<<" "<<p[i].n<<endl;
}
