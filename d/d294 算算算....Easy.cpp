#include<iostream>
using namespace std;

unsigned long long int c[2000][2000];
int main()
{
	int n,m;
	unsigned long long int a;
	for(int i=0;i<2000;i++)
		c[i][0]=c[i][i]=1;
	for(int i=1;i<2000;i++)
		for(int j=1;j<i;j++)
			c[i][j]=c[i-1][j-1]+c[i-1][j];
	while(cin>>n>>m)
	{
		a=c[n+1][2]*c[m+1][2];
		cout<<a<<endl;
	}
}
