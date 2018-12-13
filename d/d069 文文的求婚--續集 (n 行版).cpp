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
				cout<<"a leap year\n";
			else if(a[i]%100==0)
				cout<<"a normal year\n";
			else if(a[i]%4==0)
				cout<<"a leap year\n";
			else
				cout<<"a normal year\n";
		}
	}
}
