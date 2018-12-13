#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum,ans,n,a[10005];
	while(cin>>n)
	{
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sum=0,ans=a[0];
		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int j=i;j<n;j++)
			{
				sum+=a[j];
				if(sum>ans)
					ans=sum;
			}
		}
		if(ans>0)
			cout<<"The maximum winning streak is "<<ans<<".\n";
		else
			cout<<"Losing streak.\n";
	}
}
