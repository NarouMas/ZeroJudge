#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int fa[1000],t,a,b,n,k;
	fa[0]=0,fa[1]=1;
	for(int i=2;i<1000;i++)
		fa[i]=fa[i-1]+fa[i-2];
	while(cin>>t)
	{
		for(int nn=0;nn<t;nn++)
		{
			cin>>a>>b;
			if(a>b)
				swap(a,b);
			n=0,k=0;
			for(int i=a;i<=b;i++)
			{
				for(int j=k;fa[j]<=i;j++,k++)
					if(fa[j]==i)
					{
						cout<<fa[j]<<"\n";
						n++;
					}
			}
			cout<<n<<"\n";
			if(nn!=t-1)
				cout<<"------\n";
		}
	}
}
