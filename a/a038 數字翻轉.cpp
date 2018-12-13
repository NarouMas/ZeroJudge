#include<iostream>
using namespace std;

int main()
{
	char a[100],b[100],c[100];
	bool dis,dis2,dis3;
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
		dis=false,dis2=false,dis3=true;
		
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
		/*for(int i=0;i<100;i++)
		{
			if(a[i]!='0'||dis)
			{
			//	cout<<i<<"\n";
				dis=true;
				b[n]=a[i];
				n++;
			}
			
			if(i==99)
				break;
		}
		
		dis=false,n=0;
		for(int i=0;b[i]!=' ';i++)
			len=i;
		len--;
		for(int i=len;i>=0;i--)
		{
			if(a[i]!='0'||dis)
			{
				dis=true;
				c[n]=b[i];
				n++;
			}
			
			if(i==0)
				break;
		}
		for(int i=0;c[i]!=' ';i++)
			cout<<c[i];
		cout<<endl;*/
		for(int i=0;i<100;i++)	
		{
			a[i]=' ';
			b[i]=' ';
			c[i]=' ';
		}
	}
} 
