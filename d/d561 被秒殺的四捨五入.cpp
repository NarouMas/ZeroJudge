#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char a[200],b[200];
	bool n,zero;
	int len;
	for(int i=0;i<200;i++)
		a[i]=b[i]=' ';
	while(cin>>a)
	{
		n=false,zero=false;
		if(a[0]=='-')
		{
			n=true;
			for(int i=0;i<200;i++)
				a[i]=a[i+1];
		}

		if(a[4]>='5')
			a[3]+=char(1);
		
		for(int i=3;i>=0;i--)
		{
			if(i!=1)
				if(int(a[i]-'0')>=10)
				{
					if(i!=2)
					{
						a[i]-=char(10);
						a[i-1]+=char(1);
					}
					else
					{
						a[i]-=char(10);
						a[i-2]+=char(1);
					}
					
				}
		}
		for(int i=0;a[i]!=' ';i++)
			len=i;
		if(len>4)
			len=4;
		switch(len)
		{
			case 1:if(a[0]=='0') zero=true;break;
			case 3:if(a[0]=='0'&&a[2]=='0') zero=true;break;
			case 4:if(a[0]=='0'&&a[2]=='0'&&a[3]=='0') zero=true;break;
		}
		 
		if(zero)
			cout<<"0.00";
		else
		{
			if(n)
				cout<<'-';
			for(int i=0;i<len;i++)
				cout<<a[i];
			switch(len)
			{
				case 1:cout<<".0";
				case 3:cout<<"0";
			}
		}
		
		cout<<endl;
		for(int i=0;i<200;i++)
			a[i]=' ';
	}
}
