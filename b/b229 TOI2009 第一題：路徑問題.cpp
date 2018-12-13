#include<iostream>
using namespace std;

int main()
{
	int n;
	unsigned long long int a[200];
	a[1]=3,a[2]=7;
	for(int i=3;i<200;i++)
		a[i]=a[i-1]*2+a[i-2];
	while(cin>>n)
		cout<<a[n]<<endl;
}
