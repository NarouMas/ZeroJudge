#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,a[10005],m;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		m=0;
		for(int i=0;i<n/2;i++)
			if(a[i]+a[n-1-i]>m)
				m=a[i]+a[n-1-i];
		cout<<m<<endl;
	}
}
