#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int t;
	int n[10000],u[10000],s[10000];
	long double nn,av,ss,xi;
	while(cin>>t)
	{
		nn=av=ss=xi=0;
		for(int i=0;i<t;i++)
			cin>>n[i]>>u[i]>>s[i];
		for(int i=0;i<t;i++)
		{
			nn+=n[i];
			av+=u[i]*n[i];
			xi+=n[i]*(u[i]*u[i]+s[i]*s[i]);
		}
		av=av/nn;
		ss=sqrt((xi-nn*av*av)/nn);
		cout<<nn<<' ';
		cout<<fixed<<setprecision(2)<<av<<' '<<ss<<endl;
	}
}
