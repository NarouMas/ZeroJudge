#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int s[100000],v[100000],c[100000];
void knapsack(int n,int w)
{
	memset(c,0,sizeof(c));
	for(int i=0;i<n;++i)
		for(int j=w;j-s[i]>=0;--j)
			c[j]=max(c[j],c[j-s[i]]+v[i]);
}
int main()
{
	int w,n;
	while(cin>>n)
	{
		for(int i=0;i<100000;i++)
			s[i]=c[i]=v[i]=0;
		for(int i=0;i<n;i++)
			cin>>s[i]>>v[i];
		cin>>w;
		knapsack(n,w);
		cout<<c[w]<<endl;
	}
}
