#include<iostream>
#define size 100000
using namespace std;

char a[size],b[size];
bool isalpha(char test);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int len,ln,lt;
	while(cin>>a)
	{
		ln=0;
		for(int i=0;a[i]!='\0';i++)
		{
			len=i;
			if(a[i]>='0'&&a[i]<='9')
				b[ln++]=a[i];
		}
		for(int i=0;i<=len;i++)
		{
			if(isalpha(a[i]))
			{
				for(int j=i;isalpha(a[j]);j++)
					lt=j-i;
				for(int j=i,l=0;l<=lt/2;l++,j++)
					swap(a[j],a[lt+i-l]);
				i+=lt;
			}
			else
			{
				a[i]=b[--ln];
			}
		}
		for(int i=0;i<=len;i++)
			cout<<a[i];
		cout<<"\n";
	}
}

bool isalpha(char test)
{
	if(test>='a'&&test<='z')
		return true;
	else if(test>='A'&&test<='Z')
		return true;
	return false;
}
