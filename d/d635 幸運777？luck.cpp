#include<iostream>
using namespace std;

int main()
{
	int n,k;
	int a[32];
	while(cin>>n)
	{
		if(n<0)
			break;
		k=0;
		a[k]=0;
		while(n>0)
		{
			a[k]=n%8;
			n/=8;
			k++;
		}
		for(int i=k-1;i>=0;i--)
			cout<<a[i];
		if(k==0)
			cout<<"0";
		cout<<endl;
	}
	cout<<"-1\n";
}
