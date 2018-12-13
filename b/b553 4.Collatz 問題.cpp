#include<iostream>
using namespace std;

int collatz(int n)
{
	if(n%2==0)
		return n/2;
	else if(n>1)
		return n*3+1;
	else
		return 1;
}

int main()
{
	int n,ans;
	while(cin>>n)
	{
		ans=1;
		while(collatz(n)!=1)
		{
			n=collatz(n);
			ans++;
		}
		cout<<ans<<endl;
	}
}
