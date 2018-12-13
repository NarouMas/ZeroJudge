#include<iostream>
using namespace std;

int main()
{
	int n,a[200];
	while(cin>>n)
	{
		for(int i=0;i<=n;i++)
			cin>>a[i];
		for(int i=0;i<=n;i++)
		{
			if(a[i]!=0)
			{
				if(a[i]<0)
				{
					cout<<"-";
					a[i]*=-1;
				}
				else if(i!=0)
					cout<<"+";
				if(a[i]!=1||i==n)
					cout<<a[i];
				if(i==n-1)
					cout<<"x";
				else if(i<n-1)
				{
					cout<<"x^"<<n-i;
				}
			}
		}
		cout<<endl;
	}
}
