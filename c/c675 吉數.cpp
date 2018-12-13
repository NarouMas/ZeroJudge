#include<iostream>
using namespace std;

bool is4(int n)
{
	while(n>0)
	{
		if(n%10==4)
			return true;
		n/=10;
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	char k;
	int a[20000];
	int b[20000];
	for(int i=0,j=1;i<20000;j++)
	{
		if(!is4(j))
			a[i]=j,i++;
	}
	for(int i=1,j=1;i<=20000;i++)
	{
		if(!is4(i))
			b[i]=j,j++;
	}
	while(cin>>k>>n)
	{
		if(k=='T')
		{
			cout<<a[n-1]<<"\n";
		}
		else
		{
			cout<<b[n]<<"\n";
		}
	}
}
