#include<iostream>
using namespace std;

int main()
{
	int n;
	char a[200000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(int(a[i])>64&&int(a[i])<91)
				a[i]+=' ';
			else
				a[i]-=' ';
		}
		for(int i=0;i<n;i++)
			cout<<a[i];
		cout<<endl;
		
	}
}
