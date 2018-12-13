#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	int cpa;
	int n;
	while(cin>>a>>b>>c>>d)
	{
		n=0;
		n+=d;
		cpa=c*3*3*3;
		n+=cpa/64;
		cpa=cpa%64;
		cpa=b*2*2*2+cpa;
		n+=cpa/64;
		cpa%=64;
		cpa+=a;
		n+=cpa/64;
		cout<<cpa<<endl;
	}
}
