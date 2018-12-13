#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long a[100],n,ans,t;
	t=1;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		ans=0;
		for(int i=n-1;a[i]>0&&i>=0;i--)
		{
			if(a[i]>0)
			{
				if(ans==0)
					ans=1;
				ans*=a[i];
			}
		}
		for(int i=0;a[i]<0&&i<n-1;i++)
		{
			if(a[i]<0&&a[i+1]<0)
			{
				if(ans==0)
					ans=1;
				ans*=a[i]*a[i+1];
				i++;
			}
		}
		cout<<"Case #"<<t<<": The maximum product is "<<ans<<".\n";
		t++;
	}
}
