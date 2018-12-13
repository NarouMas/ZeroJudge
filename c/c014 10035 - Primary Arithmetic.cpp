#include<iostream>
using namespace std;

int main()
{
	char a[15],b[15];
	int c[15];
	int n,la,lb,lc;
	while(cin>>a)
	{
		cin>>b;
		for(int i=0;i<15;i++)
			c[i]=0;
		for(int i=0;a[i]!='\0';i++)
			la=i;
		for(int i=0;b[i]!='\0';i++)
			lb=i;
		if(a[0]=='0'&&b[0]=='0'&&la==0&&lb==0)
			break;
		for(int i=0;i<=la/2;i++)
			swap(a[i],a[la-i]);
		for(int i=0;i<=lb/2;i++)
			swap(b[i],b[lb-i]);
		/*cout<<"a:";
		for(int i=0;i<=la;i++)
			cout<<a[i];
		cout<<endl;
		cout<<"b:";
		for(int i=0;i<=lb;i++)
			cout<<b[i];
		cout<<endl;*/
		n=0;
		lc=la;
		if(lb>la)
			lc=lb;
		for(int i=0;i<=la||i<=lb;i++)
		{
			if(i<=la&&i<=lb)
				c[i]=int(a[i]-'0')+int(b[i]-'0');
			else if(i<=la)
				c[i]=int(a[i]-'0');
			else
				c[i]=int(b[i]-'0');
		}
		for(int i=0;i<=lc;i++)
		{
			if(c[i]>=10)
			{
				n++;
				c[i+1]+=c[i]/10;
				c[i]=c[i]%10;
				if(i==lc)
					lc++;
			}
		}
		if(n==0)
			cout<<"No carry operation.\n";
		else
		{
			cout<<n;
			if(n==1)
				cout<<" carry operation.\n";
			else
				cout<<" carry operations.\n";
		}
	}
}
