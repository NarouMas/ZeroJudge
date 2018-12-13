#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int max,min,t,m;
	int n,a[100001];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		max=a[0]-a[n-1];
		m=a[0];
		//min=a[n-1];
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>m)
				m=a[i];
			if(a[i]==min||i==0)
			{
				min=a[n-1];
				for(int j=i+1;j<n;j++)
					if(a[j]<min)
						min=a[j];
			}
				
			t=m-min;
			if(t>max)
				max=t;
		}
		cout<<max<<endl;
	}
}
