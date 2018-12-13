#include<iostream>
using namespace std;

int main()
{
	char a[300];
	for(int i=0;i<300;i++)
		a[i]=' ';
	int ans;
	int n;
	while(cin>>a)
	{
		n=0;
		for(int i=0;a[i]!=' ';i++)
			n++;
		//cout<<n<<endl;
		if(a[0]=='0'&&n==2)
			break;
		ans=0;
		
		
		for(int i=0;i<n-1;i++)
		{
			if(int(a[i])>96&&int(a[i])<123)
				a[i]=a[i]-' ';
			else if(int(a[i])>64&&int(a[i])<91)
				int aaaa;
			else
			{
				cout<<"Fail\n";
				goto end;
			}
			//cout<<n<<endl;
		}
		for(int i=0;i<n-1;i++)
		 	ans+=int(a[i])-64;
		cout<<ans<<endl;
		end:
		for(int i=0;i<300;i++)
			a[i]=' ';
	}
}
//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
