#include<iostream>
using namespace std;

int main()
{
	int n;
	long long a[15];
	long long t,t1,t2;
	while(cin>>n)
	{
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			t1=a[i],t2=a[i+1];
			while(a[i+1])
				t=a[i]%a[i+1],a[i]=a[i+1],a[i+1]=t;
			a[i+1]=t1*t2/a[i];
		}
		cout<<a[n-1]<<endl;
	}
}
