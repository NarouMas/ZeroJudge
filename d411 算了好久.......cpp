#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long double n,t;
	long long m,a;
	t=2;
	while(cin>>m>>n)
	{
		a=pow(t,n);
		if(m%a==0)
			cout<<"YA!!�ש��X"<<m<<"�i�Q2��"<<n<<"���㰣�F!!\n";
		else
			cout<<"�i�c!!��F�o��["<<m<<"���M�L�k�Q2��"<<n<<"���㰣\n";
	}
}
