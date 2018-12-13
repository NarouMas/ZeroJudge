#include<iostream>
using namespace std;

int main()
{
	char a[1000];
	int len;
	bool dis;
	for(int i=0;i<1000;i++)
		a[i]=' ';
	while(cin>>a)
	{
		dis=true;
		for(int i=0;i<1000;i++)
		if(a[i]!=' ')
			len=i;
		len--;
		for(int i=0;i<len/2;i++)
		if(a[i]!=a[len-i])
			dis=false;
		if(dis)
			cout<<"yes\n";
		else
			cout<<"no\n";
		for(int i=0;i<1000;i++)
			a[i]=' ';
	}
}
