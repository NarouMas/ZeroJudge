#include<iostream>
using namespace std;

char a[1000],b[1000];
int d[1000];
int la,lb,ld;
void mul();
int main()
{
	int n;
	a[0]='1',a[1]='\0';
	b[0]='2',b[1]='\0';
	while(cin>>n)
	{
		while(n--)
		{
			for(int i=0;a[i]!='\0';i++)
				la=i;
			for(int i=0;b[i]!='\0';i++)
				lb=i;
			//cout<<"n:"<<n<<" la:"<<la<<" lb:"<<lb<<endl;	
			mul();
			for(int i=ld,j=0;i>=0;i--,j++)
				a[j]=d[i]+'0';
			b[0]='2',b[1]='\0';
			a[ld+1]='\0';
		}
		for(int i=0;i<=ld;i++)
			cout<<a[i];
		cout<<endl;
		a[0]='1',a[1]='\0';
		b[0]='2',b[1]='\0';
	}
}
void mul()
{
	for(int i=0;i<1000;i++)
		d[i]=0;
	for(int i=0;i<=la/2;i++)
		swap(a[i],a[la-i]);
	for(int i=0;i<=lb/2;i++)
		swap(b[i],b[lb-i]);
	for(int i=0;i<=lb;i++)
		for(int j=0;j<=la;j++)
		{
			d[i+j]+=int(a[j]-'0')*int(b[i]-'0');
		}
	ld=la+lb;
	for(int i=0;i<=ld;i++)
	{
		if(d[i]>=10)
		{
			if(i+1>ld)
			{
				d[i+1]=0;
				ld++;
			}
			d[i+1]+=d[i]/10;
			d[i]=d[i]%10;
		}
	}
}
