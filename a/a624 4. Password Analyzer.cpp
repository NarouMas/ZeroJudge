#include<iostream>
using namespace std;

int main()
{
	char p[50];
	int n,len;
	bool small,big;
	bool al,num;
	for(int i=0;i<50;i++)
		p[i]=' ';
	while(cin>>p)
	{
		n=0,len=0;
		small=false; big=false;
		al=false; num=false;
		for(int i=0;i<50;i++)
			if(p[i]!=' ')
				len=i;
		if(len>=8)
			n++;
		//cout<<len<<endl;
		for(int i=0;i<len;i++)
		{
			if(int(p[i])>64&&int(p[i])<91)
				big=true;
			if(int(p[i])>96&&int(p[i])<123)
				small=true;
		}
		//cout<<"big:"<<big<<" small:"<<small<<endl; 
		if(big&&small)
			n++;
		
		for(int i=0;i<len;i++)
		{
			if(big||small)
				al=true;
			if(p[i]<65||p[i]>122)
				num=true;
			else if(p[i]>90&&p[i]<97)
				num=true;
		}
		if(al&&num)
			n++;
		
		if(n==0)
			cout<<"This password is WEAK\n";
		if(n==1)
			cout<<"This password is ACCEPTABLE\n";
		if(n==2)
			cout<<"This password is GOOD\n";
		if(n==3)
			cout<<"This password is STRONG\n";
		for(int i=0;i<50;i++)
			p[i]=' ';
	}
}
