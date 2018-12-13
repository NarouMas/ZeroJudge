#include<iostream>
using namespace std;

int main()
{
	int n,ans;
	while(cin>>n)
	{
		cout<<n;
		if(n==0)
			n++;
		cout<<"! = "<<n;
		ans=n;
		n--;
		for(int i=n;i>0;i--)
		{
			cout<<" * "<<i;
			ans*=i;
		}
		cout<<" = "<<ans<<endl;
	}
}
