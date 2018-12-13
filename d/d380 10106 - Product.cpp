#include<iostream>
#include<algorithm>
#define size  2000
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	char a[size],b[size];
	int c[size];
	int lena,lenb,max;
	bool f0,is0;
	for(int i=0;i<size;i++)
	{
		a[i]=b[i]=' ';
		c[i]=0;
	}
	while(cin>>a>>b)
	{
		max=0;
		for(int i=0;a[i]!=' ';i++)
			lena=i;
		for(int i=0;b[i]!=' ';i++)
			lenb=i;
		is0=false;
		if(lena==1&&a[0]=='0')
			is0=true;
		if(lenb==1&&b[0]=='0')
			is0=true;
		for(int i=0;i<lena/2;i++)
			swap(a[i],a[lena-1-i]);
		for(int i=0;i<lenb/2;i++)
			swap(b[i],b[lenb-1-i]);
		for(int i=0;i<lenb;i++)
		{
			for(int j=0;j<lena;j++)
			{
				c[i+j]+=int(b[i]-'0')*int(a[j]-'0');
				if(i+j>max)
					max=i+j;
			}
		}
		for(int i=0;i<=max;i++)
		{
			if(c[i]>=10)
			{
				c[i+1]+=c[i]/10;
				c[i]=c[i]%10;
				if(i==max)
					max++;
			}
		}
		//for(int i=0;i<lena;i++)
		//	cout<<a[i];
		//cout<<endl;
		//cout<<"lena:"<<lena<<" lenb:"<<lenb<<" max:"<<max<<endl;
		f0=true;
		for(int i=max;i>=0;i--)
		{
			if(c[i]!=0)
				f0=false;
			if(!f0)
				cout<<c[i];
		}
		if(is0)
			cout<<"0";
		cout<<endl;
		for(int i=0;i<=lena;i++)
			a[i]=' ';
		for(int i=0;i<=lenb;i++)
			b[i]=' ';
		for(int i=0;i<=max;i++)
			c[i]=0;
	}
}
