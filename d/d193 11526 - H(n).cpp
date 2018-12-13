#include<iostream>
using namespace std;

 long long H(long long n)
{
	long long res = 0;
	for( int i = 1; i <= n; i=i+1 )	
		res = (res + n/i);		
	return res;
}
int main()
{
	long long n,t;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n;
			cout<<H(n)<<endl;
		}
	}
}
