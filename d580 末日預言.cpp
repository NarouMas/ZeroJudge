#include<iostream>
using namespace std;

int main()
{
	int n,a[10005];
	a[0]=1,a[1]=1;
	for(int i=2;i<10005;i++)
		a[i]=(a[i-2]+a[i-1])%2012;
	while(cin>>n)
		cout<<a[n]<<endl;
}
