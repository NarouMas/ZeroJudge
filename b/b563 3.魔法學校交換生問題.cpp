#include<iostream>
using namespace std;

int main()
{
	int a[100000],b[100000],n,t[4],ans;
	bool c[100000];
	while(cin>>n)
	{
		ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			c[i]=true;
		}
		for(int i=0;i<n;i++)
		{
			if(c[i])
			{
				for(int j=i+1;j<n;j++)
					if(c[j])
					{
						if(a[i]==b[j]&&b[i]==a[j])
						{
							ans++;
							c[i]=c[j]=false;
						}
					}
			}
		}
		cout<<ans<<endl;
	}
}
