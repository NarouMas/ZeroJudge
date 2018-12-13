#include<iostream>
#include<cmath>
#define size 10000
using namespace std;

bool prime[size];
void setprime()
{
	int sqrt_20000000=sqrt(size);
	prime[0]=prime[1]=true;
	for(int i=0;i<sqrt_20000000;i++)
		if(!prime[i])
			for(int k=(size-1)/i,j=i*k;k>=i;k--,j-=i)
				if(!prime[k])
					prime[j]=true;
}
int main()
{
	int a[26];
	int max,min;
	char b[1000];
	setprime();
	while(cin>>b)
	{
		for(int i=0;i<26;i++)
			a[i]=0;
		for(int i=0;b[i]!='\0';i++)
		{
			if(b[i]>='A'&&b[i]<='Z')
				b[i]+=' ';
			a[int(b[i]-'a')]++;
		}
		max=0,min=99999;
		for(int i=0;i<26;i++)
		{
			if(max<a[i])
				max=a[i];
			if(min>a[i]&&a[i]>0)
				min=a[i];
		}
		//cout<<"M:"<<max<<" m:"<<min<<endl;
		if(prime[max-min])
			cout<<"No Answer\n"
				<<"0\n";
		else
			cout<<"Lucky Word\n"
				<<max-min<<endl;
	}
}
