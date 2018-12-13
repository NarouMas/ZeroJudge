#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	float a,sum,t;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>t;
			sum=0;
			for(int i=0;i<t;i++)
			{
				cin>>a;
				sum+=a;
			}
			sum=sum/t;
			cout<<fixed<<setprecision(2)<<sum<<endl;
		}
	}
}
