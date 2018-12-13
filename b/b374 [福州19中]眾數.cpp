#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int a[20000],b[20000];
	int max;
	int t;
	while(cin>>n)
	{
		max=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		
		t=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
				t++;
			else
				t=0;
			if(max<t)
			{
				max=t;
			}				
		}
		t=0;
		int l=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
				t++;
			else
				t=0;
			if(t==max)
			{
				b[l]=a[i];
				l++;
			}
				
		}
		for(int i=0;i<l;i++)
			cout<<b[i]<<" "<<max+1<<endl;
	}
}

