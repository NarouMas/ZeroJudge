#include<iostream>
#define size 100000000
using namespace std;

char a[size];
int b[size];
int main()
{
	int n,len;
	while(cin.getline(a,size))
	{
		for(int i=0;i<size;i++)
			b[i]=0;
		for(int i=0;a[i]!='\0';i++)
			len=i;
		n=0;
		for(int i=len,t=1;i>=0;i--)
		{
			if(a[i]!=' ')
			{
				n+=int(a[i]-'0')*t;
				t*=10;
			}
			if(a[i]==' '||i==0)
			{
				b[n]++;
				//cout<<"n:"<<n<<endl;
				n=0;
				t=1;
			}
		}
		for(int i=0;i<size;i++)
			if(b[i]==2)
			{
				cout<<i<<endl;
				break;
			}
	}
}
