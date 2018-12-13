#include<iostream>
using namespace std;

int main()
{
	char a[20];
	int b[100];
	int len,n,count=1;
	while(cin>>a)
	{
		for(int i=0;a[i]!='\0';i++)
			len=i;
		for(int i=0;i<100;i++)
			b[i]=0;
		for(int i=0,j=len,t=1;j>=0;j--,i++)
		{
			if(i%4!=1)
			{
				b[i]+=int(a[j]-'0')*t;
				t*=10;
				if(j>0)
					b[i]+=int(a[j-1]-'0')*t;
				j--,t=1;
			}
			else
			{
				b[i]+=int(a[j]-'0')*t;
			}
			n=i;
		}
		cout<<"    "<<count<<". ";
		for(int i=n;i>=0;i--)
		{
			if(b[i]!=0)
			{
				cout<<b[i];
				if(i!=0)
				{
					switch(i%4)
					{
						case 1:cout<<" shata ";break;
						case 2:cout<<" hajar ";break;
						case 3:cout<<" lakh ";break;
						case 0:cout<<" kuti ";break;
					}
				}
			}
			else if(i%4==0)
			{
				if(i!=0)
					cout<<"kuti ";
				else if(len==0)
					cout<<"0";
			}
			
		}
		cout<<endl;
		count++;
	}
}
