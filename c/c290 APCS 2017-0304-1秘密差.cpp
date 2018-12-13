#include<iostream>
using namespace std;

int main()
{
	char n[100000];
	long long a,b,len;
	for(int i=0;i<100000;i++)
		n[i]=' ';
	while(cin>>n)
	{
		a=b=0;
		for(int i=0;n[i]!=' ';i++)
			len=i;
		//cout<<len;
		for(int i=0;i<len;i++)
		{
			if(i%2==0)
				a+=int(n[i]-'0');
			else
				b+=int(n[i]-'0');
		}
		if(a>=b)
			cout<<a-b<<endl;
		else
			cout<<b-a<<endl;
		for(int i=0;i<100000;i++)
			n[i]=' ';
	}
}
