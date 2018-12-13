#include<iostream>
#include<algorithm>
using namespace std;

struct book
{
	int t1;
	int t2;
};

bool cmp(book a,book b)
{
	if(a.t2!=b.t2)
		return a.t2>b.t2;
	else
		return a.t1<b.t1;
}

int main()
{
	book b[1000];
	int n,ans;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>b[i].t1>>b[i].t2;
		sort(b,b+n,cmp);

		ans=0;
		for(int i=0,t=0;i<n;i++)
		{
			t=0;
			ans+=b[i].t1;
			for(int j=i+1;j<n;j++)
			{
				t+=b[j].t1+b[j].t2;			
				if(t>=b[i].t2)
					break;
			}
			if(t<b[i].t2)
				ans+=b[i].t2-t;
		}
		cout<<ans<<endl;
	}
}
