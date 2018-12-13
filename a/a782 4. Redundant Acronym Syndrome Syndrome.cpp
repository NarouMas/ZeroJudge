#include<iostream>
using namespace std;

int main()
{
	char a[10000],b[10000];
	int len;
	bool dlen;
	for(int i=0;i<10000;i++)
		a[i]=b[i]=' ';
	while(cin.getline(a,10000))
	{
		if(a[0]=='E'&&a[1]=='N'&&a[2]=='D')
			break;
		dlen=true;
		for(int i=0;i<10000;i++)
			if(a[i]==' ')
			{
				for(int j=i+1;j<10000;j++)
					if(a[j]!=' ')
						dlen=false;
				if(dlen)
				{
					len=i;
					goto p;
				}
				else
					dlen=true;	
			}
	p:
		
		if(a[0]>='a'&&a[0]<='z')
			cout<<char(a[0]-' ');
		else
			cout<<a[0];
		for(int i=1;i<len-1;i++)
			if(a[i]==' ')
			{
				if(a[i+1]>='a'&&a[i+1]<='z')
					cout<<char(a[i+1]-' ');
				else
					cout<<a[i+1];
			}
		cout<<' ';
		int t=0;
		for(int i=len-1;a[i]!=' ';i--,t++)
			b[t]=a[i];
		for(int i=t-1;i>=0;i--)
			cout<<b[i];
		cout<<endl;
		for(int i=0;i<10000;i++)
			a[i]=b[i]=' ';
	}
}




