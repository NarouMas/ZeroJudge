#include<iostream>
using namespace std;

bool d(int n,int len,char a[])
{
	int k=0;
	for(int i=0;i<len;i++)
	{
		k=(k+int(a[i]-'0'))%n;
		k*=10;
	}
	if(k==0)
		return true;
	else
		return false;
}
int main()
{
	char a[1000];
	int len;
	bool dis,leap;
	for(int i=0;i<1000;i++)
		a[i]=' ';
	while(cin>>a)
	{
		dis=true;
		leap=false;
		for(int i=0;a[i]!=' ';i++)
			len=i;
		if(d(400,len,a))
		{
			cout<<"This is leap year.\n";
			dis=false;
			leap=true;
		}
		else if(!d(100,len,a)&&d(4,len,a))
		{
			cout<<"This is leap year.\n";
			dis=false;
			leap=true;
		}
		if(d(15,len,a))
		{
			cout<<"This is huluculu festival year.\n";
			dis=false;
		}
		if(d(55,len,a)&&leap)
		{
			cout<<"This is bulukulu festival year.\n";
			dis=false;
		}
		if(dis)
			cout<<"This is an ordinary year.\n";
		for(int i=0;i<1000;i++)
			a[i]=' ';
	}
}
