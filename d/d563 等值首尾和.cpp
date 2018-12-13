#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,a[100000];
	int f[100000],b,ans;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		b=ans=0;
		f[0]=a[0];
		for(int i=1;i<n;i++)
		{
			f[i]=f[i-1]+a[i];
		}
		for(int i=0,cj=0;i<n;i++)
		{
			//cout<<"t\n";
			b+=a[n-1-i];
			for(int j=cj;j<n;j++)
				if(b==f[j]||f[j]>b)
				{
					if(b==f[j])
					{
						ans++;
						cj=j+1;
					}		
					break;
				}
		}
		cout<<ans<<"\n";
	}
}
