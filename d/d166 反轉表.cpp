#include<iostream>
using namespace std;

int main()
{
	int a[50],b[50],len,m,n;
	char c[200];
	while(cin.getline(c,200))
	{
		for(int i=0;c[i]!='\0';i++)
			len=i;
		if(c[0]=='-'&&c[1]=='1'&&len==1)
			break;
		for(int i=0;i<50;i++)
			b[i]=-1,a[i]=0;
		m=0;
		for(int i=len,t=1;i>=0;i--)
		{
			if(c[i]!=' ')
			{
				a[m]+=int(c[i]-'0')*t;
				t*=10;
			}
			else
			{
				m++;
				t=1;
			}
		}
		for(int i=0;i<=m/2;i++)
			swap(a[i],a[m-i]);
		for(int i=0,t=1;i<=m;i++,t++)
		{
			n=a[i];
			for(int j=0;j<=n;j++)
			{
				if(b[j]!=-1)
					n++;
			}
			//while(b[n]!=-1)
			//	n++;
			b[n]=t;
		}
		for(int i=0;i<=m;i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
}
