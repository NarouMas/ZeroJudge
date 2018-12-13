#include<iostream>
using namespace std;

int main()
{
	char a[2000],b[2000];
	int c[26];
	int odd,even;
	int len;
	int n;
	bool ans;
	for(int i=0;i<2000;i++)
	{
		a[i]=' ';
		b[i]=' ';
	}
	for(int i=0;i<26;i++)
		c[i]=0;
	while(cin>>a)
	{
		odd=0,even=0;
		ans=true;
		for(int i=0;a[i]!=' ';i++)
			len=i;
		
		for(int i=0;i<len;i++)
		{
			if(int(a[i])>40&&int(a[i])<91)
				a[i]+=' ';
		}
		
		n=0;
		for(int i=0;i<len;i++)
		{
			if(a[i]>96&&a[i]<123)
			{
				b[n]=a[i];
				n++;
			}
		}
		len=0;
		for(int i=0;b[i]!=' ';i++)
			len=i;
		//for(int i=0;i<len+1;i++)
		//	cout<<b[i];
		//cout<<endl;
		int t;
		if(len==0)
		{
			cout<<"yes !\n";
			goto end;
		}
			
		len++;
		for(int i=0;i<len;i++)
		{
			t=int(b[i]-'a');
			c[t]++;
		}
		for(int i=0;i<26;i++)
		{
			if(c[i]%2==0)
				even++;
			else
				odd++;
		}
		//cout<<"len="<<len<<endl;
		if(len%2==0&&odd==0)
			cout<<"yes !\n";
		else if(len%2==1&&odd==1)
			cout<<"yes !\n";
		else if(even==0&&odd==0)
			cout<<"yes !\n";
		else
			cout<<"no...\n";
		end:
		for(int i=0;i<2000;i++)
		{
			a[i]=' ';
			b[i]=' ';
		}
		for(int i=0;i<26;i++)
			c[i]=0;
	}
}
