#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,d[10001];
	int a,b,odd;
	while(cin>>n>>m)
	{
		memset(d,0,sizeof(d));
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			d[a]++,d[b]++;
		}
		odd=0;
		for(int i=1;i<=n&&odd<=2;i++)
		{
			if(d[i]%2==1)
				odd++;
		}
		if(odd==0||odd==2)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
