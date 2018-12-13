#include<iostream>
#include<algorithm>
using namespace std;

struct f
{
	int a;
	int n;
};
bool cmp(f f1,f f2)
{
	if(f1.n!=f2.n)
		return f1.n>f2.n;
	else
		return f1.a>f2.a;
}
int main()
{
	int n;
	int a,b;
	f ff[2000];
	while(cin>>n)
	{
		if(n==0)
			break;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			ff[i].n=a+b;
			if(a>b)
				ff[i].a=3;
			else if(a==b)
				ff[i].a=2;
			else if(a<b)
				ff[i].a=1;
		}
		sort(ff,ff+n,cmp);
		
		for(int i=0;i<n;i++)
		{
			switch(ff[i].a)
			{
				case 1: cout<<"<"; break;
				case 2: cout<<"="; break;
				case 3: cout<<">"; break;
			}
			cout<<ff[i].n<<" ";
		}
		cout<<endl;
	}
}
