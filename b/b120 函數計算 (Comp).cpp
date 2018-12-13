#include<iostream>
using namespace std;

long long f(long long);
//long long h(long long);
long long hdp[100000],gdp[100000],fdp[100000];
long long g(long long);
int main()
{
	for(int i=0;i<=100000;i++)
	{
		if(i-300<2)
			hdp[i]=-1;
		else
			hdp[i]=hdp[i-1]-hdp[i-2]+2;
	}
	for(int i=0,j;i<=100000;i++)
	{
		j=i-300;
		if(j<=2)
			gdp[i]=j*j-1;
		else
			gdp[i]=2;
	}
	for(int i=0,j;i<=100000;i++)
	{
		j=i-300;
		if(j>hdp[i])
			fdp[i]=fdp[i-1]-hdp[i];
		else if(j<hdp[i])
			fdp[i]=fdp[gdp[i]]-gdp[i];
		else
			fdp[i]=1;
	}
	int x;
	while(cin>>x)
	{
		cout<<fdp[x+300]<<endl;
	}
}
long long f(long long x)
{
	long long hx,gx=gdp[x+300];
	if(x+300<2)
		hx=-1;
	else
	{
		hx=hdp[x+300];
	}
	cout<<x<<endl;	
	if(x>hx)
		return f(x-1)-hx;
	else if(x<hx)
		return f(gx)-gx;
	else
		return 1;
}
/*long long h(long long x)
{
	for(long i=0;i<=600;i++)
	{
		if(i-300<2)
			hdp[i]=-1;
		else
			hdp[i]=hdp[i-1]-hdp[i-2]+2;
	}
	/*if(x<2)
		return -1;
	else
		return 2+h(x-1)-h(x-2);//
}*/
long long g(long long x)
{
	if(x<=2)
		return x*x-1;
	else
		return 2;
}
