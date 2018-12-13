#include<iostream>
using namespace std;

int main()
{
	int n;
	int tn;
	while(cin>>n)
	{
		tn=n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<tn-1;j++)
				cout<<"_";
			for(int j=0;j<=i;j++)
				cout<<'*';
			cout<<endl;
			tn--;
		}
	}
}
