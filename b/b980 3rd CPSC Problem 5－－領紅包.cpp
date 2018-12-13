#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	int n,a[10005],t;
	unsigned long long int sum;
	while(cin>>n)
	{
		t=0;
		while(true)
		{
			cin>>a[t];
			if(a[t]==-1)
				break;
			t++;
		}
		sort(a,a+t,cmp);
		sum=0;
		for(int i=0;i<n&&i<t;i++)
			sum+=a[i];
		cout<<sum<<endl;
	}
}
