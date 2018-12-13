#include<iostream>
using namespace std;

int main()
{
	int n,t;
	int a[30];
	while(cin>>n)
	{
		if(n<0)
			break;
		t=0;
		while(n>=3)
		{
			a[t]=n%3;
			n/=3;
			t++;
		}
		t--;
		cout<<n;
		for(int i=t;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
}
