#include<iostream>
using namespace std;

int main()
{
	int a,n;
	int b[1000];
	while(cin>>a)
	{
		n=0;
		while(a!=1)
		{
			b[n]=a%2;
			a=a/2;
			n++;
		}
		cout<<"1";
		//system("pause");
		for(int i=n-1;i>=0;i--)
			cout<<b[i];
		cout<<endl;
	}
}
