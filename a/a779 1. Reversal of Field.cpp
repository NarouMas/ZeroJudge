#include<iostream>
using namespace std;

int main()
{
	int t,len;
	char a[10000];
	char b[10000];
	bool dis,dlen;
	for(int i=0;i<10000;i++)
		a[i]=b[i]=' ';
	while(cin.getline(a,10000))
	{
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
		t=0;
		dis=true;
		for(int i=0;i<len;i++)
		{
			if(a[i]>='a'&&a[i]<='z')
			{
				b[t]=a[i]-' ';
				t++;
			}
			else if(a[i]>='A'&&a[i]<='Z')
			{
				b[t]=a[i];
				t++;
			}
			else if(a[i]>='0'&&a[i]<='9')
			{
				b[t]=a[i];
				t++;
			}
		}
		for(int i=0;i<t/2;i++)
			if(b[i]!=b[t-i-1])
			{
				dis=false;
				break;
			}
		for(int i=0;i<len;i++)
			cout<<a[i];
		cout<<endl;
		if(dis)
			cout<<"-- is a palindrome\n";
		else
			cout<<"-- is not a palindrome\n";
		for(int i=0;i<10000;i++)
			a[i]=b[i]=' ';
	}
}
