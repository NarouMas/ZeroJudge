#include<iostream>
using namespace std;

int main()
{
	char a[20],b[20];
	int len,n,t;
	bool ishex;
	while(cin>>a)
	{
		if(a[0]=='-')
			break;
		ishex=false;
		for(int i=0;a[i]!='\0';i++)
			len=i;
		if(a[0]=='0'&&a[1]=='x')
			ishex=true;
		if(!ishex)
		{
			n=0;
			for(int i=len,tt=1;i>=0;i--,tt*=10)
				n+=int(a[i]-'0')*tt;
			t=0;
			while(n>0)
			{
				switch(n%16)
				{
					case 0:b[t]='0';break;
					case 1:b[t]='1';break;
					case 2:b[t]='2';break;
					case 3:b[t]='3';break;
					case 4:b[t]='4';break;
					case 5:b[t]='5';break;
					case 6:b[t]='6';break;
					case 7:b[t]='7';break;
					case 8:b[t]='8';break;
					case 9:b[t]='9';break;
					case 10:b[t]='A';break;
					case 11:b[t]='B';break;
					case 12:b[t]='C';break;
					case 13:b[t]='D';break;
					case 14:b[t]='E';break;
					case 15:b[t]='F';break;
				}
				n/=16;
				t++;
			}
			cout<<"0x";
			for(int i=t-1;i>=0;i--)
				cout<<b[i];
			cout<<endl;
		}
		else
		{
			n=0;
			for(int i=len,tt=1;i>=2;i--,tt*=16)
			{
				if(a[i]>='0'&&a[i]<='9')
					n+=int(a[i]-'0')*tt;
				else
					n+=(int(a[i]-'A')+10)*tt;
			}
			t=0;
			cout<<n<<endl;
		}
	}
}
