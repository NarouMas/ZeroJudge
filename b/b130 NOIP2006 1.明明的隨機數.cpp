#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,a[1000];
	int m,b[1000];
	while(cin>>n)
	{
		m=1;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		b[0]=a[0];
		for(int i=1;i<n;i++)
			if(a[i]!=a[i-1])
			{
				b[m]=a[i];
				m++;
			}
		cout<<m<<endl;
		for(int i=0;i<m;i++)
			cout<<b[i]<<' ';
		cout<<endl;
	}
}
