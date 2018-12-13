#include<iostream>
using namespace std;

int ans[10];
int b[10];
int n;
void dod(int);
int main()
{
	while(cin>>n)
	{
		for(int i=0;i<10;i++)
			b[i]=0;
		dod(0);
	}
}

void dod(int x)
{
	if(x==n)
	{
		for(int i=0;i<n;i++)
			cout<<ans[i];
		cout<<endl;
	}
	for(int i=n;i>0;i--)
	{
		if(b[i]==0)		
		{
			b[i]=1;
			ans[x]=i;
			dod(x+1);
			b[i]=0;
		}
		
	}
}
