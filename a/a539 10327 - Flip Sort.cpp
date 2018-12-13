#include<iostream>
using namespace std;

int main()
{
	int n,ans;
	long long a[10000];
	while(cin>>n)
	{
		ans=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int t;
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(a[i]>=a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
					ans++;
				}
		cout<<"Minimum exchange operations : "<<ans<<endl;
	}
}
