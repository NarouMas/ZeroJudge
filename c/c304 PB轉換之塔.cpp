#include<iostream>
using namespace std;

int main()
{
	char a[1000],b[1000],c[1000];
	int len,t;
	bool add;
	for(int i=0;i<1000;i++)
		a[i]=' ';
	while(cin>>a)
	{
		len=0;
		for(int i=0;a[i]!=' ';i++)
			len=i;
		t=0;
		for(int i=len-1;i>=0;i--,t++)
			b[t]=a[i];
		add=false;
		for(int i=len-1;i>=0;i--)
		{
			t=int(a[i]-'0')+int(b[i]-'0');
			if(add)
				t++;
			if(t>=10)
			{
				t%=10;
				add=true;
			}
			else
				add=false;
			c[i]=char(t+'0');
		}
		if(add)
			cout<<'1';
		for(int i=0;i<len;i++)
			cout<<c[i];
		cout<<endl;
		for(int i=0;i<1000;i++)
		{
			a[i]=' ';
		}
			
	}
}
