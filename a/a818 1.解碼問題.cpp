#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,b[100],k;
	char a[100],t[100];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>k;
		
		for(int l=0;l<k;l++)
		{
			for(int i=0;i<n;i++)
			{
				if(l%2==0)
					t[i]=a[b[i]-1];
				else
					a[i]=t[b[i]-1];
			}
			if(l==k-1&&l%2==0)
				for(int i=0;i<n;i++)
					a[i]=t[i];
		}
		for(int i=0;i<n;i++)
			cout<<a[i];
		cout<<endl;
	}
}
