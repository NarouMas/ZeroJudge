#include<iostream>
#include<algorithm>
#define size 100000
using namespace std;

int main()
{
	char a[100],b[100],c[100];
	bool dis,dis2,dis3,ne;
	int n,len;
	for(int i=0;i<100;i++)	
	{
		a[i]=' ';
		b[i]=' ';
		c[i]=' ';
	}
	while(cin>>a)
	{
		n=0;
		dis=false,dis2=false,dis3=true,ne=false;
		if(a[0]=='-')
			ne=true;
		/*if(ne)
		{
			int i,j;
			char t[100];
			for(i=0;a[i]!='\0';i++)
				t[i]=a[i+1];
				
		}*/
		for(int i=0;a[i]!=' ';i++)
			len=i;
		len--;
		for(int i=0;i<len;i++)
			if(a[i]!='0')
				dis3=false;
		if(dis3)
		{
			cout<<"0";
			goto end;
		}
			
		if(ne)
		{
			cout<<"-";
			a[0]=' ';
		}
		for(int i=len;i>=0;i--)
		{
			if(a[i]!=' ')
			{
				if(a[i]!='0'||dis)
				{
					dis=true;
					if(a[i]=='0')
					{
						for(int j=i;j>=0;j--)
							if(a[j]!='0')
							{
								dis2=true;
								//cout<<"j:"<<j<<endl;
							}
						if(dis2)
							cout<<a[i];
						dis2=false;
					}
					else
						cout<<a[i];
				}
				else if(dis)
				{
					for(int j=i;j>=0;j--)
						if(a[j]!='0')
						{
							dis2=true;
							cout<<"j:"<<j<<endl;
						}
							
					if(dis2)
						cout<<a[i];
					dis2=false;
				}
			}
				
		}
		end:
		cout<<endl;

		for(int i=0;i<100;i++)	
		{
			a[i]=' ';
			b[i]=' ';
			c[i]=' ';
		}
	}
	/*char a[size];
	bool n;
	int len;
	while(cin>>a)
	{
		n=false;
		if(a[0]=='-')
			n=true;
		for(int i=0;a[i]!='\0';i++)
			len=i;
		if(!n)
			for(int i=0;i<=len/2;i++)
				swap(a[i],a[len-i]);
		else
		{
			len--;
			for(int i=1;i<=len/2;i++)
				swap(a[i],a[len+1-i]);
		}
		if(!n)
			for(int i=0;a[i]!='\0';i++)
				cout<<a[i];
		else
		{
			cout<<"-";
			for(int i=1;i<=len+1;i++)
				cout<<a[i];
		}		
		cout<<endl;
	}*/ 
}
