#include<iostream>
using namespace std;

int main()
{
	char a[1500];
	int len,n,d,t;
	while(cin>>a)
	{
		for(int i=0;a[i]!='\0';i++)
			len=i;
		if(a[0]=='0'&&len==0)
			break;
		n=0,d=1;
		for(int i=0;i<=len;i++)
			n+=int(a[i]-'0');
		while(n>10)
		{
			t=0;
			while(n>0)
			{
				t+=n%10;
				n/=10;
			}
			n=t;
			d++;
		}
		for(int i=0;i<=len;i++)
			cout<<a[i];
		if(n==9)
			cout<<" is a multiple of 9 and has 9-degree "<<d<<".\n";
		else
			cout<<" is not a multiple of 9.\n";
	}
}
