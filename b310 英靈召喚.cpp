#include<iostream>
#define size 1000005
using namespace std;

int a[size],sum[size];

int bin(int p,int n,int m,int end)
{
	if(sum[n]-sum[p]+a[p]>=m)
		while(n<end)
		{
			//cout<<"n:"<<n<<" p:"<<p<<endl;
			if(sum[n]-sum[p]+a[p]>=m)
			{
				if(sum[n-1]-sum[p]+a[p]<m)
					return n-p+1;
				n=(n-p)/2;
			}
			else if(sum[n]-sum[p]+a[p]<m)
			{
				if(sum[n+1]-sum[p]+a[p]>m)
					return n+1-p+1;
				n=(n+p)/2+1;
			}
		}
	return end+1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,min,t;
	while(cin>>n>>m)
	{
		cin>>a[0];
		sum[0]=a[0],min=n+1;
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			sum[i]=a[i]+sum[i-1];
		}
		for(int i=0;i<n;i++)
		{
			t=bin(i,n-1,m,n);
			//cout<<"i:"<<i<<" t:"<<t<<endl;
			if(t<min)
				min=t;
			else if(t==n+1)
				break;
		}
		if(min>n)
			cout<<"GGGGGZ\n";
		else
			cout<<min<<"\n";
	}
}
