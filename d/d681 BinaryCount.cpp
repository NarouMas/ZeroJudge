#include<iostream>
#define size 100000
using namespace std;

int main()
{
	char c[size];
	char a[10],b[10];
	bool d;
	int len;
	while(cin.getline(c,size))
	{
		for(int i=0;c[i]!='\0';i++)
			len=i;
		for(int i=0;i<5;i++)
		{
			a[i]=c[i];
			cout<<c[i];
		}
		for(int i=6;i<=len;i++)
		{
			if(c[i]=='a')
			{
				cout<<"&&";
				d=true;
				i+=3;
			}
			else if(c[i]=='o')
			{
				cout<<"||";
				d=false;
				i+=2;
			}
			else
			{
				for(int j=i,t=0;j<i+5;j++,t++)
				{
					b[t]=c[j];
					cout<<c[j];
				}
					
				i+=5;
				if(d)
				{
					for(int j=0;j<5;j++)
					{
						if(a[j]=='1'&&b[j]=='1')
							a[j]='1';
						else
							a[j]='0';
					}
				}
				else
				{
					for(int j=0;j<5;j++)
					{
						if(a[j]=='1'||b[j]=='1')
							a[j]='1';
						else
							a[j]='0';
					}
				}
			}
			if(i>=len)
			{
				cout<<" = ";
				for(int j=0;j<5;j++)
					cout<<a[j];
				cout<<endl;
			}
		}
		
		//cout<<len<<endl;
	}
}
