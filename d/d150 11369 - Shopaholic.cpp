#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,ans;
	int p[30000];
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			for(int i=0;i<n;i++)
				cin>>p[i];
			sort(p,p+n);
			ans=0;
			for(int i=n-1,j=0;i>=0;i--,j++)
				if((j+1)%3==0)
				{
					//cout<<p[i]<<endl;
					ans+=p[i];
				}
					
			cout<<ans<<endl; 
		}
	}
}
