#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,a[1000],m,cm;
	while(cin>>n)
	{
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>m;
		sort(a,a+n);
		for(int i=0;i<=n-m;i++)
		{
			for(int j=0;j<n;j++)
				cout<<a[j]<<' ';
			cout<<endl;
			for(int j=i+1,cj;j<n;j++)
				{
					cm=m-1,cj=j;
					if(cj+cm<=n)
					{
						cout<<a[i]<<' ';
						while(cm--)
						{
							cout<<a[cj]<<' ';
							cj++;
						}
						cout<<endl;
					}	
				}
			//cout<<endl;
		}
		cout<<endl;	
	}
}
