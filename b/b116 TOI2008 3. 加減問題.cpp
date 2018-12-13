#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,m;
	long long a[200],f,b;
	bool d;
	while(cin>>m>>n)
	{
		while(m--)
		{
			for(int i=0;i<n;i++)
				cin>>a[i];
			sort(a,a+n);
			f=b=0;
			for(int i=0;i<n;i++)
				b+=a[i];
			d=false;
			for(int i=0;i<n-1;i++)
			{
				f+=a[i],b-=a[i];
				if(f==b)
				{
					d=true;
					break;
				}
			}
			if(d)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
}
