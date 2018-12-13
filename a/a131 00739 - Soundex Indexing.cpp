#include<iostream>
#include<iomanip>
using namespace std;

int dist(char a)
{
	int t=0;
	switch(a)
	{
		case 'B': t=1;break;
		case 'P': t=1;break;
		case 'F': t=1;break;
		case 'V': t=1;break;
		
		case 'C': t=2;break;
		case 'S': t=2;break;
		case 'K': t=2;break;
		case 'G': t=2;break;
		case 'J': t=2;break;
		case 'Q': t=2;break;
		case 'X': t=2;break;
		case 'Z': t=2;break;
		
		case 'D': t=3;break;
		case 'T': t=3;break;
		
		case 'L': t=4;break;
		
		case 'M': t=5;break;
		case 'N': t=5;break;
		
		case 'R': t=6;break;
	}
	return t;
}
int main()
{
	char a[30],b[30];
	int t,len;
	cout<<"NAME                     SOUNDEX CODE\n";
	while(cin>>a)
	{
		b[1]=b[2]=b[3]='0';
		b[0]=a[0];
		for(int i=1,j=1;a[i]!='\0'&&j<4;i++)
		{
			t=dist(a[i]);
			if(t!=dist(a[i-1])&&t!=0)
			{
				b[j]='0'+t;
				j++;
			}
		}
		cout<<setw(10);
		for(int i=0;a[i]!='\0';i++)
		{
			len=i;
			cout<<a[i];
		}
			
		cout<<setw(25-len);
		for(int i=0;i<4;i++)
			cout<<b[i];
		cout<<endl;	
	}
	cout<<"                   END OF OUTPUT\n";
	/*	<<"         |         |              |\n"
		<<"         |         |              |__ Column 35\n"
		<<"        |         |__ Column 20\n"
		<<"         |__ Column 10\n";*/
}
