#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	unsigned long long int n;
	while(cin>>n)
	{
		cout<<fixed<<setprecision(0)<<pow(n,1/3.0)<<endl;
	}
}
