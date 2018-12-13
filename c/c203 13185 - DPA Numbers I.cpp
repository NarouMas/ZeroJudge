#include<iostream>
using namespace std;

int main()
{
	int sum,n,t;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			sum=0;
			for(int i=1;i<n;i++)
				if(n%i==0)
					sum+=i;
			if(n==sum)
				cout<<"perfect\n";
			else if(n<sum)
				cout<<"abundant\n";
			else
				cout<<"deficient\n";
		}
	}
}
