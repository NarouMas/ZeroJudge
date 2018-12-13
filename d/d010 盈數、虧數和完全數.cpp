#include<iostream>
using namespace std;

int main()
{
	long long n,sum;
	while(cin>>n)
	{
		sum=0;
		for(int i=1;i<n;i++)
			if(n%i==0)
				sum+=i;
		if(sum>n)
			cout<<"盈數\n";
		else if(sum==n)
			cout<<"完全數\n";
		else
			cout<<"虧數\n";
	}
}
