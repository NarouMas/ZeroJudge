#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	int t;
	while(b)
		t=a%b,a=b,b=t;
	return a;
}
int main()
{
	int a,b,c,d;
	int n1,n2,g;
	char e;
	while(cin>>a>>b>>c>>d>>e)
	{
		if(e=='*'||e=='/')
		{
			if(e=='/')
				swap(c,d);
			n1=a*c,n2=b*d;
		}
		else if(e=='+'||e=='-')
		{
			a*=d,c*=b;
			n2=b*d;
			if(e=='+')
				n1=a+c;
			else
				n1=a-c;
		}

		if(n1==0)
			cout<<"0\n";
		else if(n1%n2==0)
			cout<<n1/n2<<endl;
		else
		{
			if(n1>0&&n2>0)
				g=gcd(n1,n2);
			else if(n1<0&&n2>0)
				g=gcd(n1*-1,n2);
			else if(n1>0&&n2<0)
				g=gcd(n1,n2*-1);
			else if(n1<0&&n2<0)
				g=gcd(n1*-1,n2*-1);
			n1=n1/g,n2=n2/g;
			if(n2<0)
				n1*=-1,n2*=-1;
			cout<<n1<<"/"<<n2<<endl;
		}
	}
}
