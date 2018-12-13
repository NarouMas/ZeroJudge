#include<iostream>
using namespace std;

int main()
{
	char a[30];
	int len,ans;
	for(int i=0;i<30;i++)
		a[i]=' ';
	while(cin>>a)
	{
		ans=0;
		for(int i=0;a[i]!=' ';i++)
			len=i;
		for(int i=len-1,j=1;i>=0;i--)
		{
			ans+=int(a[i]-'0')*j;
			j*=-2;
		}
		cout<<ans<<endl;
		for(int i=0;i<30;i++)
			a[i]=' ';
	}
}
