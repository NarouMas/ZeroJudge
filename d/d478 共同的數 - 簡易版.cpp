#include<iostream>
using namespace std;

int binary(int [],int,int);
int main()
{
	int n,m;
	int sum;
	int a[10000],b[10000];
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int j=0;j<m;j++)
				cin>>a[j];
			for(int j=0;j<m;j++)
				cin>>b[j];
			
			for(int j=0;j<m;j++)
			{
				if(binary(a,b[j],m)!=-1)
					sum++;
			}
			cout<<sum<<endl;
		}
	}
}
int binary(int num[],int find,int n)
{
	int mid,max=n-1;
	int low=0;
	while(low<=max)
	{
		mid=(low+max)/2;
		if(find>num[mid])
			low=mid+1;
		else if(find<num[mid])
			max=mid-1;
		else
			return mid;
	}
	return -1;
}
