#include<iostream>
using namespace std;

int main()
{
	int h,l,t,n;
	int a[100];
	while(cin>>t)
	{
		for(int i=0;i<t;i++)
		{
			h=0,l=0;
			for(int j=0;j<100;j++)
				a[j]=-1;
			cin>>n;
			for(int j=0;j<n;j++)
				cin>>a[j];
			for(int j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
					l++;
				if(a[j]<a[j+1])
					h++;
			}
			cout<<"Case "<<i+1<<": "<<h<<" "<<l<<endl;
		}
	}
}
