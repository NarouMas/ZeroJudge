#include<iostream>
using namespace std;

bool sqrt(int);
int main()
{
	int n;
	int a[100],b[100];
	int sum[100];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			cin>>b[i];
			sum[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=a[i];j<=b[i];j++)
				if(sqrt(j))
					sum[i]+=j;
		}
		for(int i=0;i<n;i++)
			cout<<"Case "<<i+1<<": "<<sum[i]<<endl;
	}
}

bool sqrt(int c)
{
	bool e;
	e=false;
	for(int i=1;i<=c;i++)
	{
		if(c==i*i)
			{
				//cout<<"sqrt:"<<c<<endl;
				e=true;
			}

	}
	return e;
}
