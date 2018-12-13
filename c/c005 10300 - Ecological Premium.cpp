#include<iostream>
using namespace std;

int main()
{
	long long n,f,a,b,c,sum;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>f;
			sum=0;
			for(int i=0;i<f;i++)
			{
				cin>>a>>b>>c;
				sum+=a*c;
			}
			cout<<sum<<endl;
		}
	}
}
