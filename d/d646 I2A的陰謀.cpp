#include<bits/stdc++.h>
using namespace std;

char n1[1000000],n2[1000000],n3[1000000];

int main()
{
	unsigned long long int a,b,i,t;
	int la,lb,lc;
	while(cin>>n1>>n2)
	{
		for(i=0;n1[i]!='\0';i++)
			la=i;
		for(i=0;n2[i]!='\0';i++)
			lb=i;
		a=b=0;
		//cout<<"la:"<<la<<endl;
		for(t=1;la>=0;la--,t*=2)
		{
			if(n1[la]=='1')
				a+=t;
			//cout<<la<<endl;
		}
		for(t=1;lb>=0;lb--,t*=2)
		{
			if(n2[lb]=='1')
				b+=t;
		}
		//cout<<a<<" "<<b<<endl;
		while(b)
			t=a%b,a=b,b=t;
		lc=0;
		while(a>0)
		{
			if(a%2==0)
				n3[lc]='0';
			else
				n3[lc]='1';
			//cout<<"n:"<<n3[lc]<<endl;
			lc++;
			a/=2;
		}
		lc--;
		for(;lc>=0;lc--)
			cout<<n3[lc];
		cout<<endl;
	}
}
