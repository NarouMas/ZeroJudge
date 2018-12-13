#include<iostream>
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
	int n,g;
	while(cin>>n)
	{
		if(n==0)
			break;
		g=0;
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
			{
  				 g+=gcd(i,j);
			}
		cout<<g<<endl;
	}
}
