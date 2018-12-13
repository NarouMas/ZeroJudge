#include<iostream>
using namespace std;

int main()
{
	int t;
	int a[3];
	while(cin>>t)
	{
		for(int n=1;n<=t;n++)
		{
			cin>>a[0]>>a[1]>>a[2];
			cout<<"Case "<<n<<": ";
			if(a[0]>a[1]&&a[0]<a[2])
				cout<<a[0];
			else if(a[0]>a[2]&&a[0]<a[1])
				cout<<a[0];
			else if(a[1]>a[0]&&a[1]<a[2])
				cout<<a[1];
			else if(a[1]>a[2]&&a[1]<a[0])
				cout<<a[1];
			else if(a[2]>a[0]&&a[2]<a[1])
				cout<<a[2];
			else if(a[2]>a[1]&&a[2]<a[0])
				cout<<a[2];
			cout<<endl; 
		}
	}
}
