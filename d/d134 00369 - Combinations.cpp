#include<iostream>
using namespace std;

unsigned long long int a[2000],b[2000];
unsigned long long int pa(int n,int m)
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
					a[j]=(b[j-1]+b[j]);
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
					b[j]=(a[j-1]+a[j]);
				}
				
			}
				
		}
	}

	if(n%2==0)
		return a[m];
	else
		return b[m];
}
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==m&&m==0)
			break;
		cout<<n<<" things taken "<<m<<" at a time is "<<pa(n,m)<<" exactly.\n";
	}
}
