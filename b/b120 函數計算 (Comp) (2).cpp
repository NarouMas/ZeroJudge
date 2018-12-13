#include<iostream>
using namespace std;

int f(int);
int h(int);
int g(int);
int hv[90000];

int main()
{
	int n;
	hv[0]=-1,hv[1]=-1;
	for(int i=2;i<90000;i++)
		hv[i]=2+hv[i-1]-hv[i-2];
	while(cin>>n)
		cout<<f(n)<<endl;
}

int f(int x)
{
	int hn;
	//cout<<"x:"<<x<<endl;
	if(x<0)
		hn=-1;
	else
		hn=hv[x];
	if(x>hn)
		return f(x-1)-hn;
	else if(x<hn)
		return f(g(x))-g(x);
	else
		return 1;
}

int h(int y)
{
	if(y<2)
		return -1;
	else
		return 2+h(y-1)-h(y-2);
}

int g(int z)
{
	if(z<=2)
		return z*z-1;
	else
		return 2;
}
