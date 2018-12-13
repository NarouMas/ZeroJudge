#include<iostream>
using namespace std;

int getnum(char a)
{
	switch(a)
	{
		case 'I': return 1; break;
		case 'V': return 5; break;
		case 'X': return 10; break;
		case 'L': return 50; break;
		case 'C': return 100; break;
		case 'D': return 500; break;
		case 'M': return 1000; break;
		case '\0': return 0; break;
	}
}

int main()
{
	char a[10],b[10];
	int h,m;
	string s[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int num[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	while(cin>>a>>b)
	{
		h=m=0;
		for(int i=0;a[i]!='\0';i++)
		{
			if(getnum(a[i])>=getnum(a[i+1]))
				h+=getnum(a[i]);
			else
				h+=getnum(a[i+1])-getnum(a[i]),i++;
		}
		for(int i=0;b[i]!='\0';i++)
		{
			if(getnum(b[i])>=getnum(b[i+1]))
				m+=getnum(b[i]);
			else
				m+=getnum(b[i+1])-getnum(b[i]),i++;
		}
		//cout<<"time:"<<h<<" "<<m<<endl;
		if(m<30)
			m+=30;
		else
			m=m-30,h++;
		h+=7;
		if(h>=24)
			h-=24;
		
		while(h>0)
		{
			for(int i=0;i<13;i++)
				if(h>=num[i])
				{
					cout<<s[i];
					h-=num[i];
					break;
				}
		}
		cout<<endl;
		while(m>0)
		{
			for(int i=0;i<13;i++)
				if(m>=num[i])
				{
					cout<<s[i];
					m-=num[i];
					break;
				}
		}
		cout<<endl;
	}
}
