#include<iostream>
using namespace std;

int main()
{
	int n,m,k;
	long long ans;
	while(cin>>n>>m)
	{
		int be[n],cbe[n];
		for(int i=0;i<n;i++)
		{
			cin>>be[i];
			cbe[i]=be[i];
		}
			
		int l[m],r[m],v[m];
		for(int i=0;i<m;i++)
			cin>>l[i]>>r[i]>>v[i];
		cin>>k;
		int a,b,c,d;
		while(k--)
		{
			ans=0;
			for(int i=0;i<n;i++)
				be[i]=cbe[i];
			cin>>a>>b>>c>>d;
			a--,b--,c--,d--;
			for(int i=c;i<=d;i++)
			{
				for(int j=a;j<=b;j++)
					if(j>=l[i]-1&&j<=r[i]-1)
						be[j]+=v[i];
			}
			for(int i=a;i<=b;i++)
				ans+=be[i];
			//for(int i=0;i<n;i++)
				//cout<<be[i]<<' ';
			cout<<ans;
			cout<<endl;
		}
	}
} 
