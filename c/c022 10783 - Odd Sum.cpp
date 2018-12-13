#include<iostream>
using namespace std;

int main()
{
	int t,a,b,ans;
	while(cin>>t)
	{
		for(int j=0;j<t;j++)
		{
			ans=0;
			cin>>a>>b;
			for(int i=a;i<=b;i++)
				if(i%2==1)
					ans+=i;
			cout<<"Case "<<j+1<<": "<<ans<<endl;
		}
	}
}
