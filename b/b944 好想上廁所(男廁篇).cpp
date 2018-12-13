#include<iostream>
using namespace std;

int main()
{
	int n,a,b,f;
	bool dis,l;
	while(cin>>n)
	{
		int c[n+2],t[n+2];
		for(int i=0;i<n+2;i++)
			c[i]=t[i]=0;
		while(cin>>a>>b)
		{
			for(int i=1;i<=n;i++)
			{
				if(t[i]!=0)
				{
					t[i]--;
					if(t[i]==0)
						c[i]=0;
				}
				else
					c[i]=0;
			}
				
					
			dis=l=true,f=-2;
			for(int i=1;i<=n;i++)
			{
				if(t[i]==0&&t[i-1]==0&&t[i+1]==0)
				{
					c[i]=a;
					t[i]=b;
					l=false;
					break;
				}
				else if(t[i]==0&&dis)
					f=i,dis=false;
			}
			if(f==-2&&l)
				cout<<"  Not enough\n";
			else if(!dis&&l)
				c[f]=a,t[f]=b;
			cout<<"Number: ";
			for(int i=1;i<=n;i++)
				cout<<c[i]<<' ';
			cout<<endl
				<<"  Time: ";
			for(int i=1;i<=n;i++)
				cout<<t[i]<<' ';
			cout<<endl;
		}
	}
}
