#include<iostream>
#define size 1000000
using namespace std;

int a,b,c[size];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>m;
			for(int i=m-1;i>=0;i--)
			{
				cin>>a>>b;
				c[i]=a+b;
			}
			for(int i=0;i<m;i++)
			{
				if(c[i]>=10)
				{								
					if(i+1==m)
					{
						c[i+1]=0;
						m++;
					}
					c[i+1]+=c[i]/10;
					c[i]=c[i]%10;
				}
			}
			for(int i=m-1;i>=0;i--)
				cout<<c[i];
			cout<<endl;
		}
	}
}
