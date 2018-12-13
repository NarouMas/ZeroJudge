#include<iostream>
#define size 100
using namespace std;

int main()
{
	char a[size],ans[size];
	int la;
	int b1,b2,p,t;
	unsigned long long int n;
	while(cin>>a>>b1>>b2)
	{
		//a[0]=char(12-10+'A');
		//cout<<a[0]<<endl;
		for(int i=0;a[i]!='\0';i++)
			la=i;
		n=0,p=1;
		for(int i=la;i>=0;i--)
		{
			if(a[i]>='0'&&a[i]<='9')
				t=int(a[i]-'0');
			else
				t=int(a[i]-'A')+10;
			n+=t*p;
			p*=b1;
		}
		la=0;
		while(n>0)
		{
			t=n%b2;
			if(t<=9)
				ans[la]=char(t+'0');
			else
				ans[la]=char(t-10+'A');
			//cout<<ans[la]<<endl;
			la++,n/=b2;
		}
		la--;
		for(int i=la;i>=0;i--)
			cout<<ans[i];
		cout<<endl;
	}
}
