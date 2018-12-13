#include<iostream>
#define size 10000
using namespace std;

int main()
{
	char a[size];
	while(cin.getline(a,size))
	{
		for(int i=0;a[i]!='\0';i++)
			if(a[i]>='A'&&a[i]<='Z')
				a[i]+=' ';
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]>='a'&&a[i]<='z')
			{
				a[i]-=' ';
				cout<<a<<endl;
				a[i]+=' ';
			}
			//else
			//	cout<<a<<endl;
		}
	}
}
