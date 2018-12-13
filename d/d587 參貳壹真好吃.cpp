#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long n;
	long long k;
	long long a,b,c;
	while(cin>>n)
	{
		a=0,b=0,c=0;
		for(long long i=0;i<n;i++)
		{
			cin>>k;
			if(k==1)
				a++;
			if(k==2)
				b++;
			if(k==3)
				c++;
		}
		
		while(a!=0)
		{
			cout<<"1 ";
			a--;
		}
		while(b!=0)
		{
			cout<<"2 ";
			b--;
		}
		while(c!=0)
		{
			cout<<"3 ";
			c--;
		}
		cout<<endl;

	}
}
