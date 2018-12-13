#include<iostream>
using namespace std;

int main()
{
	long long n;
	int a;
	while(cin>>n)
	{
		if(n==0)
			break;
		a=1;
		//for(int i=0;i<n*2;i++)
		//{
			for(int j=0;j<n*8;j++)
			{
				if(a==1)
					cout<<"#";
				else
					cout<<".";
				if(j%n==n-1)
				{
					if(a==0)
						a=1;
					else
						a=0;
				}
			}
		//}
	}
}
