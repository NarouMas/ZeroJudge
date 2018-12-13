#include<iostream>
using namespace std;

int main()
{
	long a,b,ta;
	long c[33];
	long final,count;
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	while(cin>>a>>b)
	{
		final=count=1;
		c[1]=a%10007;
		for(int i=2;i<=32;i++)
			c[i]=c[i-1]*c[i-1]%10007;
		while(b!=0)
		{
			if(b&1)
			{
				final=final*c[count]%10007;
			}
			b>>=1;
			count++;
		}
		cout<<final<<endl;

	}
}
