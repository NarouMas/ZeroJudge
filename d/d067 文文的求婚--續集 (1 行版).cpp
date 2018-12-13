#include<iostream>
using namespace std;

int main()
{
	long long n;
	//long long a[10000];
	while(cin>>n)
	{		
			if(n%400==0)
				cout<<"a leap year\n";
			else if(n%100==0)
				cout<<"a normal year\n";
			else if(n%4==0)
				cout<<"a leap year\n";
			else
				cout<<"a normal year\n";
	}
}
