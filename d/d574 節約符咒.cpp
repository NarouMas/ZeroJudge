#include<iostream>
#define size 10000000
using namespace std;

char a[size],b[size];
long long c[size];
int main()
{
	char t;
	long long len,n,lenb;
	for(long long i=0;i<size;i++)
		a[i]=b[i]=' ',c[i]=1;
	while(cin>>len)
	{
		for(int i=0;i<len;i++)
			cin>>a[i];
		n=0;
		//for(long long i=0;a[i]!=' ';i++)
		//	len=i;
		for(long long i=0;i<len;i++)
		{
			if(i!=len-1)
			{
				if(a[i]==a[i+1])
				{
					t=a[i];
					c[n]++;
					b[n]=t;
				}
				if(a[i]!=a[i+1])
				{
					if(c[n]==1)
						b[n]=a[i];
					n++;
				}
			}
				
			if(i==len-1)
			{
				if(c[n]==1)
					b[n]=a[i];
				n++;
			}
		}
		//for(int i=0;b[i]!=' ';i++)
		//	lenb=i;
		if(n*2<len)
			for(int i=0;i<n;i++)
				cout<<c[i]<<b[i];
		else
			for(int i=0;i<len;i++)
				cout<<a[i];
		cout<<endl;
		for(long long i=0;i<size;i++)
			a[i]=b[i]=' ',c[i]=1;
	}
}
