#include<iostream>
using namespace std;

int main()
{
	char a[200000];
	int n=91,len,re,t;
	for(int i=0;i<200000;i++)
		a[i]=' ';
	while(cin>>a)
	{
		for(int i=0;a[i]!=' ';i++)
			len=i;
		re=0;
		for(int i=0;i<len;i++)
		{
			t=int(a[i]-'0')+re*10;
			re=t%n;
		}
		cout<<re<<endl;
		for(int i=0;i<200000;i++)
			a[i]=' ';
	}
}

