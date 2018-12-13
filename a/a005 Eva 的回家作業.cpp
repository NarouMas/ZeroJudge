#include<iostream>
using namespace std;

int main()
{
	long long a[5];
	long long d,r;
	int t;
	while(cin>>t)
	{
		for(int i=0;i<t;i++)
		{
			cin>>a[0]>>a[1]>>a[2]>>a[3];
			d=a[1]-a[0];
			r=a[1]/a[0];
			if(a[1]-a[0]==d&&a[2]-a[1]==d&&a[3]-a[2]==d)
				cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[3]+d<<endl;
			else
				cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[3]*r<<endl;
		}
		
	}
}
