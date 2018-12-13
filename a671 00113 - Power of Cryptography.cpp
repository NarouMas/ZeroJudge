#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	long double n,p,k;
	while(cin>>n>>p)
		cout<<fixed<<setprecision(0)<<pow(p,1/n)<<endl;
}
