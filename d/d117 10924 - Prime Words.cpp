#include<iostream>
#include<cmath>
#define size 1000000
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
	char a[30];
	int n;
	setprime();
	prime[1]=false;
	while(cin>>a)
	{
		n=0;
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]>='a'&&a[i]<='z')
				n+=int(a[i]-'a')+1;
			else if(a[i]>='A'&&a[i]<='Z')
				n+=int(a[i]-'A')+27;
		}
		//cout<<n<<endl;
		if(!prime[n])
			cout<<"It is a prime word.\n";
		else
			cout<<"It is not a prime word.\n";
	}
}
