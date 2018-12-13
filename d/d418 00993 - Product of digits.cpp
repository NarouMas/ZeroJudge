#include<iostream>
using namespace std;

int main()
{
	int n,q;
	while(cin>>n)
	{
		int a[10];
		for(int i=0;i<9;i++)
			a[i]=0;
		while(n--)
		{
			for(int i=0;i<9;i++)
				a[i]=0;
			cin>>q;
			for(int i=9;i>1;i--)
			{
					while(q%i==0)
				{
					a[i]+=1;
					q/=i;
				}
				int t=2;
				while(a[t]!=0)
				{
					cout<<t;
					a[t]--;
					if(a[t]==0)
						t++;
				}
			}
			
		}
	}
}
