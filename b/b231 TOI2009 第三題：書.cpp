#include<iostream>
#include<algorithm>
using namespace std;

struct book
{
	int p,b;
}b[1000];

bool cmp(book a,book b)
{
	return a.b>b.b;
}

int main()
{
	int n,t,mxt;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>b[i].p>>b[i].b;
		sort(b,b+n,cmp);
		mxt=t=0;
		
	}
}
