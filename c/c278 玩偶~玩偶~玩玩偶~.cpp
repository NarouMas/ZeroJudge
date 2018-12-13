#include<iostream>
#include<algorithm>
using namespace std;

int a[100005];

int main()
{
	int n;
	long long ans;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		
		ans=0;
		for(int i=0;i<=n/2;i+=2)
			ans+=a[i+1]-a[i];
		cout<<ans<<endl;
	}
}
