#include<iostream>
using namespace std;

int main()
{
	long long n,a[20000];
	a[1]=1;
	for(int i=2,j=2,t=0;i<20000;i++)
	{
		a[i]=a[i-1]+j;
		t++;
		if(t==j)
		{
			t=0,j++;
		}
	}
	while(cin>>n)
		cout<<a[n]<<endl;
}
