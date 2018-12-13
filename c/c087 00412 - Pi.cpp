#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int gcd(int a,int b)
{
	int t;
	while(b)
		t=a%b,a=b,b=t;
	return a;
}
int main()
{
	long double n,a[50],p,q;
	while(cin>>n)
	{
		if(n==0)
			break;
		p=q=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				if(gcd(a[i],a[j])==1)
					p++;
				q++;
			}
		if(p!=0)
			cout<<fixed<<setprecision(6)<<sqrt((6*q)/p)<<endl;
		else
			cout<<"No estimate for this data set.\n";
	}
}
