#include<iostream>
using namespace std;

int main()
{
	int n,t,k,ans;
	int a[101];
	for(int i=0;i<101;i++)
		a[i]=0;
	while(cin>>t)
	{
		while(t--)
		{
			ans=0;
			for(int i=0;i<101;i++)
				a[i]=0;
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cin>>k;
				a[k]++;
			}
			for(int i=1;i<101;i++)
			for(int j=1;j<101;j++)
			for(int l=1;l<101;l++)
				if(i*i+j*j==l*l)
					ans+=a[i]*a[j]*a[l];
			cout<<ans/2<<endl;
		}
	}
}
