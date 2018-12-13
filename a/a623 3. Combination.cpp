#include<iostream>
using namespace std;

int main()
{
	int n,m;
	long long k[100];
	k[0]=1;
	for(int i=1;i<100;i++)
		k[i]=k[i-1]*i;
	while(cin>>n>>m)
	{
		cout<<k[n]/(k[m]*k[n-m])<<endl;
	}
}
