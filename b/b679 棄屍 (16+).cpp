#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long x,h;
	long long n[200000];
	n[0]=0,n[1]=1;
	for(int i=2;i<200000;i++)
		n[i]=(i*i+i)/2;
	while(cin>>x)
	{
		//cout<<(sqrt(x*8+1)-1)/2<<endl;
		for(int i=0;i<200000;i++)
			if(n[i]==x)
			{
				cout<<i<<endl;
				break;
			}
	}
		
}
