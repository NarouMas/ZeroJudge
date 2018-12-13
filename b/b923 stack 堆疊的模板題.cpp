#include<iostream>
using namespace std;

int main()
{
	int n;
	long long a,b;
	long long s[100000],sh;
	while(cin>>n)
	{
		sh=-1;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a==3)
				cin>>b;
			
			if(a==1)
			{
				sh--;
			}
			if(a==2)
			{
				cout<<s[sh]<<endl;
			}
			if(a==3)
			{
				sh++;
				s[sh]=b;
			}
		}
	}
}
