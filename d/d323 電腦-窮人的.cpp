#include<iostream>
#include<algorithm>
using namespace std;

int a[20000000];
int main()
{
	int n;	
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
