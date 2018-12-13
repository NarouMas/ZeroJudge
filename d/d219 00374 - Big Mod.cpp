#include<iostream>
using namespace std;

long long bpmm(long long b,long long p,long long m)
{
	if(p==0)
		return 1;
	else if(p==1)
		return b%m;
	else if(p%2==0)
		return (bpmm(b,p/2,m)*bpmm(b,p/2,m))%m;
	else if(p%2==1)
		return (b%m*bpmm(b,(p-1)/2,m)*bpmm(b,(p-1)/2,m))%m;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long b,p,m;
	while(cin>>b>>p>>m)
		cout<<bpmm(b,p,m)<<"\n";
}
