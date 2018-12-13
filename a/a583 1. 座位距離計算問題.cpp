#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n,m;
	long double d,min;
	while(cin>>n>>m)
	{
		min=0;
		int x[m],y[m];
		for(int i=0;i<m;i++)
			cin>>x[i]>>y[i];
		for(int i=0;i<m;i++)
		{
			for(int j=i+1;j<m;j++)
			{
				d=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
				if(d<min)
					min=d;
				if(i==0&&j==1)
					min=d;
			}
		}
		min=sqrt(min);
		cout<<fixed<<setprecision(4)<<min<<endl;
	}
}
