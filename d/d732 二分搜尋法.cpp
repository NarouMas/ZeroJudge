#include<iostream>
using namespace std;

int binary(long long [],int,int);
int main()
{
	int n,k;
	int ans;
	long long a[100000],b[100000];
	while(cin>>n>>k)
	{
		ans=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<k;i++)
			cin>>b[i];
		
		for(int i=0;i<k;i++)
		{
			/*ans=0;
			for(int j=0;j<n;j++)
			{
				if(b[i]==a[j])
				{
					ans=j+1;
					break;
				}
			}
			cout<<ans<<endl;*/
			ans=binary(a,b[i],n);
			if(ans==-1)
				cout<<"0\n";
			else
				cout<<ans+1<<endl;
		}
	}
}
int binary(long long num[],int find,int n)
{
	int low=0,mid;
	int max=n-1;
	while(low<=max)
	{
		mid=(low+max)/2;
		if(find>num[mid])
			low=mid+1;
		else if(find<num[mid])
			max=mid-1;
		else
			return mid;
	}
	return -1;
}
