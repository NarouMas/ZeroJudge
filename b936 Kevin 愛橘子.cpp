#include<iostream>
using namespace std;

long long ans;

int loop(long long n,long long m)
{
	//cout<<n<<endl;
	if(n>=m&&n!=1)
	{
		if(n%2==0)
		{
			if(loop(n/2,m)==0)
			{
				//cout<<n<<endl;
				ans++;
			}
			if(!loop(n/2,m))
			{
				//cout<<n<<endl;
				ans++;
			}
			return 2;
		}
		else
		{
			if(!loop((n+1)/2,m))
			{
				//cout<<n<<endl;
				ans++;
			}
			if(!loop((n-1)/2,m))
			{
				//cout<<n<<endl;
				ans++;
			}
			return 2;
		}
		return 1;
	}
	else
		return 0;
}

int main()
{
	long long n,m;
	while(cin>>n>>m)
	{
		ans=0;
		loop(n,m);
		cout<<ans<<"\n";
	}
}
