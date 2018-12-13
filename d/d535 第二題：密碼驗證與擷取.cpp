#include<iostream>
using namespace std;

int main()
{
	int len;
	char a[1000];
	bool dis,even;
	for(int i=0;i<1000;i++)
		a[i]=' ';
	while(cin>>a)
	{
		dis=true;
		for(int i=0;a[i]!=' ';i++)
			len=i;
		if(len<10||len>30)
			dis=false;
		if(!dis)
			goto end;
		for(int i=0;i<len/2;i++)
			if(a[i]!=a[len-1-i])
				dis=false;
		if(!dis)
			goto end;
		for(int i=0;i<len/2-1;i++)
			if(int(a[i+1]-'0')>int(a[i]-'0')*2)
				dis=false;
		
	end:
		if(dis)
		{
			even=false;
			for(int i=0;i<len;i++)
				if(int(a[i]-'0')%2==0)
				{
					cout<<a[i];
					even=true;
				}
			if(!even)
				cout<<'0';
		}
		else
			cout<<"INCORRECT";
		cout<<endl;
	}
}
