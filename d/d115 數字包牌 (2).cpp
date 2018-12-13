#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,m,a[300],nn;
	nn=0;
	while(cin>>n)
	{
		if(n==0)
			break;
		if(nn!=0)
			cout<<endl;
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>m;
		sort(a,a+n);
		if(m==1)
		{
			for(int i=0;i<n;i++)
				cout<<a[i]<<endl;
		}
		else
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j+m-1<=n;j++)
				{
					cout<<a[i];
					for(int l=j,t=0;t<m-1;l++,t++)
						cout<<" "<<a[l];
					cout<<endl;
				}
			}
		nn++;
	}
}
