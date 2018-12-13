#include<iostream>
using namespace std;

int main()
{
	int n,a[100],max,t,ci,cj;
	while(cin>>n)
	{
		max=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			//t=0,ci=i;
			for(int j=0;j<n;j++)
			{
				t=0,ci=i,cj=j;
				while(ci--)
				{
					if(cj<n)
					{
						t+=a[cj];
						cj++;
					}
					
				}
				if(t>max)
					max=t;
			}		
		}
		cout<<max<<endl;
	}
}
