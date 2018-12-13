#include<iostream>
using namespace std;

int main()
{
	int n;
	long long a[10000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		for(int i=0;i<n;i++)
		{
			if(a[i]%400==0)
				cout<<"Case "<<i+1<<": a leap year\n";
			else if(a[i]%100==0)
				cout<<"Case "<<i+1<<": a normal year\n";
			else if(a[i]%4==0)
				cout<<"Case "<<i+1<<": a leap year\n";
			else
				cout<<"Case "<<i+1<<": a normal year\n";
		}
	}
}
