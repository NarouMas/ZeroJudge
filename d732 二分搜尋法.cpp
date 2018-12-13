#include<iostream>
using namespace std;

int a[100005];

int binary_search(int x,int n)
{
	int front=0,back=n-1,m;
	while(front<=back)
	{
		m=(front+back)/2;
		if(x==a[m])
			return m+1;
		else if(x>a[m])
			front=m+1;
		else
			back=m-1;
	}
	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k,x;
	while(cin>>n>>k)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<k;i++)
		{
			cin>>x;
			cout<<binary_search(x,n)<<"\n";
		}	
	}
}
