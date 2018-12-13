#include<iostream>
using namespace std;

long long a[2000],b[2000];
long long pa(int n,int m)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			if(i%2==0)
			{
				if(j==0)
					a[j]=1;
				else if(j==i)
					a[j]=1;
				else
				{
					a[j]=(b[j-1]+b[j])%10007;
				}
				
			}
			else
			{
				if(j==0)
					b[j]=1;
				else if(j==i)
					b[j]=1;
				else
				{
					b[j]=(a[j-1]+a[j])%10007;
				}
				
			}
				
		}
		/*if(i%2==0)
			{
				cout<<"a:";
				for(int l=0;l<=i;l++)
					cout<<a[l]<<' ';
				cout<<endl;
			}
			else
			{
				cout<<"b:";
				for(int l=0;l<=i;l++)
					cout<<b[l]<<' ';
				cout<<endl;
			}*/
	}
	/*for(int i=0;i<=n;i++)
		cout<<a[i]<<' ';
	cout<<endl;
	for(int i=0;i<=n;i++)
		cout<<b[i]<<' ';
	cout<<endl;*/
	if(n%2==0)
		return a[m];
	else
		return b[m];
}
int main()
{
	int a,b,k,n,m;
	long long an,bn,ans,p;
	while(cin>>a>>b>>k>>n>>m)
	{
		an=bn=1;
		for(int i=0;i<n;i++)
			an=(an*a)%10007;
		for(int i=0;i<k-n;i++)
			bn=(bn*b)%10007;
		p=pa(k,n);
		ans=0;
		for(int i=0;i<an;i++)
			ans=(ans+p)%10007;
		p=ans;
		for(int i=1;i<bn;i++)
			ans=(ans+p)%10007;
		//ans=(pa(k,n)*an)%10007;
		//ans=(ans*bn)%10007;
		if(n+m==k)
			cout<<ans<<endl;
		else
			cout<<"0\n";
	}
}
