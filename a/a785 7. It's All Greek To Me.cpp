#include<iostream>
using namespace std;

int main()
{
	char a[10000],b[10000];
	int len,t;
	for(int i=0;i<10000;i++)
		a[i]=b[i]=' ';
	while(cin>>a)
	{
		for(int i=0;a[i]!=' ';i++)
			len=i;
		if(a[0]=='E'&&a[1]=='N'&&a[2]=='D'&&len==3)
			break;
		t=0;
		for(int i=0;i<len;i++)
		{
			if(a[i+1]!='-')
			{
				b[t]=a[i];
				t++;
			}
			else
			{
				if(a[i]=='a')
				{
					if(a[i+2]=='a')
					{
						b[t]='a';
						t++,i+=2;
					}
					else if(a[i+2]=='e')
					{
						b[t]='a';
						t++,i+=2;
					}
					else if(a[i+2]=='i')
					{
						b[t]='a';
						b[t+1]='i';
						t+=2,i+=2;
					}
					else if(a[i+2]=='y')
					{
						b[t]='a';
						t++,i+=2;
					}
					else if(a[i+2]=='o'&&a[i+3]!='u')
					{
						b[t]='w';
						t++,i+=2;
					}
					else if(a[i+2]=='o'&&a[i+3]=='u')
					{
						b[t]='w';
						t++,i+=3;
					}
					else if(a[i+2]=='w')
					{
						b[t]='w';
						t++,i+=2;
					}					
				}
				else if(a[i]=='e')
				{
					if(a[i+2]=='a')
					{
						b[t]='y';
						t++,i+=2;
					}
					else if(a[i+2]=='e')
					{
						b[t]='e';
						b[t+1]='i';
						t+=2,i+=2;
					}
					else if(a[i+2]=='i')
					{
						b[t]='e';
						b[t+1]='i';
						t+=2,i+=2;
					}
					else if(a[i+2]=='y')
					{
						b[t]='y';
						t++,i+=2;
					}
					else if(a[i+2]=='o'&&a[i+3]!='u')
					{
						b[t]='o';
						b[t+1]='u';
						t+=2,i+=2;
					}
					else if(a[i+2]=='o'&&a[i+3]=='u')
					{
						b[t]='o';
						b[t+1]='u';
						t+=2,i+=3;
					}
					else if(a[i+2]=='w')
					{
						b[t]='w';
						t++,i+=2;
					}
				}
				else if(a[i]=='o')
				{
					if(a[i+2]=='a')
					{
						b[t]='w';
						t++,i+=2;
					}
					else if(a[i+2]=='e')
					{
						b[t]='o';
						b[t+1]='u';
						t+=2,i+=2;
					}
					else if(a[i+2]=='i')
					{
						b[t]='o';
						b[t+1]='i';
						t+=2,i+=2;
					}
					else if(a[i+2]=='y')
					{
						b[t]='w';
						t++,i+=2;
					}
					else if(a[i+2]=='o'&&a[i+3]!='u')
					{
						b[t]='o';
						b[t+1]='u';
						t+=2,i+=2;
					}
					else if(a[i+2]=='o'&&a[i+3]=='u')
					{
						b[t]='o';
						b[t+1]='u';
						t+=2,i+=3;
					}
					else if(a[i+2]=='w')
					{
						b[t]='w';
						t++,i+=2;
					}
				}
			}
		}
		for(int i=0;i<t;i++)
			cout<<b[i];
		cout<<endl;
		for(int i=0;i<10000;i++)
			a[i]=b[i]=' ';
	}
}
