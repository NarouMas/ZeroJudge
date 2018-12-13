#include<iostream>
using namespace std;

int main()
{
	char a[5000];
	int len,ans,t;
	for(int i=0;i<5000;i++)
		a[i]=' ';
	while(cin>>t)
	{
		while(t--)
		{
			cin>>a;
			ans=0;
			for(int i=0;a[i]!=' ';i++)
				len=i;
			
			for(int i=0;i<len;i++)
			{
				if(a[i]=='X')
					ans+=2;
				else if(a[i]=='H')
					ans++;
			}
			cout<<ans<<endl;
			for(int i=0;i<5000;i++)
				a[i]=' ';
		}
		
	}
	
}
