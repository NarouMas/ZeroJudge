#include<iostream>
#include<algorithm>
using namespace std;

int a[1000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
}
