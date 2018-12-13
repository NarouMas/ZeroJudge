#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int x[1000005],y[1000005];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t,n,m;
	unsigned long long int ans;
	while(cin>>t)
		while(t--)
		{
			cin>>n;
			for(int i=0;i<n;i++)
				cin>>x[i]>>y[i];
			sort(x,x+n);
			sort(y,y+n);
			if(n%2==0)
				m=n/2;
			else
				m=(n-1)/2;
			ans=0;
			for(int i=0;i<n;i++)
			{
				ans+=abs(x[i]-x[m])+abs(y[i]-y[m]);
			}
			cout<<ans<<"\n";
		}
}
