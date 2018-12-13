#include<iostream>
using namespace std;

int main()
{
	int n,x[1000],y[1000],p[2];
	long long d,max;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>x[i]>>y[i];
		max=0;
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				d=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
				if(d>max)
				{
					max=d;
					p[0]=i,p[1]=j;
				}
			}
		cout<<p[0]<<' '<<p[1]<<endl;
	}
}
