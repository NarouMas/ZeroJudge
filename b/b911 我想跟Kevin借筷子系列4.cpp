#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long n;
	while(cin>>n)
		cout<<int(log2(n))+1<<endl;
}
