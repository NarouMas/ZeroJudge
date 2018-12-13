#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,w;
	int k,x,y,max,av;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>w;
			int a[n];
			for(int i=0;i<n;i++)
				cin>>a[i];
			while(w--)
			{
				cin>>k;
				if(k==1)
				{
					max=-6000;
					cin>>x>>y;
					if(y<x)
						swap(x,y);
					for(int i=x;i<=y;i++)
						if(a[i]>max)
							max=a[i];
					cout<<max<<endl;
				}
				else if(k==2)
				{
					av=0;
					cin>>x>>y;
					if(y<x)
						swap(x,y);
					for(int i=x;i<=y;i++)
						av+=a[i];
					av=av/(y-x+1);
					cout<<av<<endl;
				}
				else if(k==3)
				{
					cin>>x;
					cout<<a[x]<<endl;
				}
			}
		}
	}
}
