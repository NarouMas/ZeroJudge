#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,ans;
	while(cin>>n)
	{
		if(n<0)
			break;
		ans=n*25;
		if(n==1)
			ans=0;
		cout<<ans<<"%\n";
	}
		
}
