#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	int t;
	while(b)
		t=a%b,a=b,b=t;
	return a;
}

int main()
{
	int n,a[505],ans;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(n>=1)
			ans=gcd(a[0],a[1]);
		else
			ans=a[0];
		for(int i=2;i<n;i++)
			ans=gcd(ans,a[i]);
		cout<<ans<<endl;
	}
}
