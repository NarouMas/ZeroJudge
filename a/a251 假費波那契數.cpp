#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,n;
	long long s[30];
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			for(int i=0;i<4;i++)
				cin>>s[i];
			for(int i=4;i<n;i++)
				s[i]=s[i-4]+s[i-1];
			sort(s,s+n);
			cout<<s[n/2]<<endl;
		}
	}
}
