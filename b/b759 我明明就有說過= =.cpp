#include<iostream>
using namespace std;

int main()
{
	char a[10000];
	int n;
	for(int i=0;i<10000;i++)
		a[i]=' ';
	while(cin>>a)
	{
		for(int i=0;i<10000;i++)
			if(a[i]==' ')
			{
				n=i;
				break;
			}
		n--;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cout<<a[j];
			cout<<endl;
			
			char t=a[0];
			for(int j=0;j<n;j++)
			{
				a[j]=a[j+1];
			}
			a[n-1]=t;
		}
	}
}
