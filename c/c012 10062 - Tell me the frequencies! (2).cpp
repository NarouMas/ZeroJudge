#include<iostream>
#include<algorithm>
using namespace std;

struct F
{
	int f;
	int ac;
};

bool cmp(F a,F b)
{
	if(a.f!=b.f)
		return a.f<b.f;
	else
		return a.ac>b.ac;
}

int main()
{
	char a[1001];
	int ac[1001],n;
	while(cin.getline(a,1001))
	{
		F ans[1001];
		for(int i=0;i<1001;i++)
			ac[i]=0;
		for(int i=0;a[i]!='\0';i++)
			ac[int(a[i])]++;
		n=0;
		for(int i=0;i<1001;i++)
			if(ac[i]!=0)
				ans[n].ac=i,ans[n].f=ac[i],n++;
		sort(ans,ans+n,cmp);
		
		for(int i=0;i<n;i++)
			cout<<ans[i].ac<<" "<<ans[i].f<<endl;
	}
}
