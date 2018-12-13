#include<iostream>
using namespace std;

int main()
{
	int h1[10000],h2[10000],m1[10000],m2[10000],a[10000];
	int n;
	int t;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>h1[i]>>m1[i]>>h2[i]>>m2[i]>>a[i];
		for(int i=0;i<n;i++)		
		{
			t=0;
			t+=(h2[i]-h1[i])*60;
			t+=m2[i]-m1[i];
			//cout<<t<<endl;
			if(t>=a[i])
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
}
