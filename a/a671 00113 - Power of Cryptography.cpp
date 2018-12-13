#include<iostream>
using namespace std;

int main()
{
	long long a,b,ans;
	while(cin>>a>>b)	
	{
		ans=0;
		while(b!=1)
		{
			b/=a;
			ans++;
		}
		cout<<ans<<endl;
	}
}
