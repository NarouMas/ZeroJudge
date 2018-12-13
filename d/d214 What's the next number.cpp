#include<iostream>
using namespace std;

/*long tt(int n)
{
	return n*(n+1)/2;
}
long pp(int n)
{
	return n*(3*n-1)/2;
}
long hh(int n)
{
	return n*(2*n-1);
}*/

int main()
{
	long long t,p,h;
	long long tn,pn,hn,c;
	tn=pn=hn=1;
	c=0;
	while(c!=3)
	{
		t=tn*(tn+1)/2;
		p=pn*(3*pn-1)/2;
		h=hn*(2*hn-1);
		if(t==h&&t==p)
		{
			//cout<<t<<endl;
			c++;
		}
		//cout<<t<<endl;
		if(p>=t&&h>=t)
			tn++;
		else if(p<t||h<t)
		{
			if(p<t)
				pn++;
			if(h<t)
				hn++;
		}
	}
	cout<<t<<endl;
}
