#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,a[1000];
	int M,m;
	bool d;
	while(cin>>n)
	{
		d=true;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		M=m=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]-a[i-1]!=1)
				d=false;
			if(a[i]<m)
				m=a[i];
			if(a[i]>M)
				M=a[i];
		}
		cout<<m<<" "<<M<<" ";
		if(d)
			cout<<"yes\n";
		else
			cout<<"no\n";
			
	}
}
