#include<iostream>
#define size 10000
using namespace std;


int main()
{
	char a[size],c;
	int n,m;
	while(cin>>a)
	{
		n=1,m=0;
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]==a[i+1])
				n++;
			else
			{
				if(n>m)
					c=a[i],m=n,n=1;
				else
					n=1;
			}
		}
		cout<<c<<" "<<m<<endl;
	}
}
