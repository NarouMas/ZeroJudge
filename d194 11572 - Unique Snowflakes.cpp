#include<iostream>
#include<algorithm>
using namespace std;

int a[1000000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,t,ans,m;
	while(cin>>t)
		while(t--)
		{
			cin>>n;
			for(int i=0;i<n;i++)
				cin>>a[i];
			//sort(a,a+n);
			ans=m=1;
			for(int i=1;i<n;i++)
			{
				if(a[i]!=a[i-1])
				{
					ans++;				
				}	
				else
				{
					if(ans>m)
						m=ans;
					ans=1;
				}
			}
			if(ans>m)
				m=ans;
			cout<<m<<"\n";
		}
}
