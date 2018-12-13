#include<iostream>
using namespace std;

int main()
{
	long long n,m,k;
	while(cin>>n>>m)
	{
		k=1;
		while(k*k+k+2*n*k+2*n<=2*m)
			k++;
		k++;
		if(n>m)
			k=1;
		cout<<k<<endl;
	}
}
