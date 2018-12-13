#include<iostream>
#include<algorithm>
#include<cmath>
#define size 2000000
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
	int n,cn,len;
	char a[30];
	setprime();
	for(int i=0;i<30;i++)
		a[i]=' ';
	while(cin>>a)
	{
		
		n=cn=0;
		for(int i=0;a[i]!=' ';i++)
			len=i;
		for(int i=0,t=1;i<len;i++)
		{
			cn+=int(a[i]-'0')*t;
			t*=10;
		}
		
		for(int i=0;i<len/2;i++)
			swap(a[i],a[len-1-i]);
		for(int i=0,t=1;i<len;i++)
		{
			n+=int(a[i]-'0')*t;
			t*=10;
		}
		//cout<<"a\n";
		if(prime[n])
			cout<<n<<" is not prime.\n";
		else
		{
			if(n!=cn&&!prime[cn])
				cout<<n<<" is emirp.\n";
			else
				cout<<n<<" is prime.\n";
		}
		for(int i=0;i<=len;i++)
			a[i]=' ';
	}
}
