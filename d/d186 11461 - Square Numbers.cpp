#include<iostream>
using namespace std;

int main()
{
	int s[400];
	for(int i=1;i<400;i++)
		s[i]=i*i;
	int a,b,ans;
	while(cin>>a>>b)
	{
		if(a==b&&a==0)
			break;
		ans=0;
		for(int i=1;i<400;i++)
		{
			if(s[i]>=a&&s[i]<=b)
				ans++;
			else if(s[i]>b)
				break;
		}
		cout<<ans<<endl;
	}
}
