#include<iostream>
#include<cstring>
using namespace std;

int a[2000001],w[2000001],b[2000001];

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	int t,n,k,s;
	long long int ans;
	bool dis;
	scanf("%d",&t);
	//cin>>t;
	while(t--)
	{
		scanf("%d %d",&n,&k);
		//cin>>n>>k;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&w[i]);
		s=0,ans=0;
		for(int i=0;i<n;i++)
			b[i]=-1;
		for(int i=1;i<n;i++)
		{
			if(a[n-1]-a[s]<k)
				break;
			if(a[i]-a[s]>k)
			{
				while(a[i]-a[s]>k&&s<n)
				{
					//cout<<"s:"<<s<<" i:"<<i<<endl;
					b[s]=i,s++;
				}
			}
		}
		for(int i=0;b[i]!=-1;i++)
		{
			//cout<<"i:"<<i<<" bi:"<<b[i]<<endl;
			for(int j=b[i];j<n;j++)
				ans+=w[i]*w[j];
		}
		//cout<<ans<<endl;
		printf("%lld\n",ans);
		/*s=1,ans=0;
		for(int i=0;i<n;i++)
		{
			dis=true;
			if(a[n-1]-a[i]<=k)
				break;
			for(int j=s;j<n;j++)
			{
				if(a[j]-a[i]>k)
				{
					s=j;
					break;
				}
				if(dis&&a[j]-a[i]>k)
					ans+=w[i]*w[j],dis=false,s=j;
				else if(!dis)
					ans+=w[i]*w[j];
			}
			for(int j=s;j<n;j++)
				ans+=w[i]*w[j];
		}
		cout<<ans<<"\n";*/
	}
}
