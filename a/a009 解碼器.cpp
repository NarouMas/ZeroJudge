#include<iostream>
using namespace std;

void test();
int main()
{
	char a[1000];
	int b[1000];
	for(int i=0;i<1000;i++)
		a[i]=' ';
	for(int i=0;i<1000;i++)
		b[i]=-1;
	while(cin>>a)
	{
		for(int i=0;i<1000&&a[i]!=' ';i++)
			b[i]=a[i];
		for(int i=0;i<1000&&a[i]!=' ';i++)
			b[i]=b[i]-7;
		for(int i=0;i<1000&&a[i+1]!=' ';i++)
			cout<<char(b[i]);
		cout<<endl;
		for(int i=0;i<1000;i++)
			a[i]=' ';
		for(int i=0;i<1000;i++)
			b[i]=-1;
	}
}
