#include<iostream>
using namespace std;

int main()
{
	int n,m;
	long long a[100000],ans,b[100000];
	int l,r;
	while(cin>>n>>m)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		b[0]=a[0];
		for(int i=1;i<n;i++)
			b[i]=b[i-1]+a[i];
		//cout<<b[0]<<' '<<b[1]<<" "<<b[2]<<endl;
		for(int i=0;i<m;i++)		
		{
			//ans=0;
			cin>>l>>r;
			l-=2; r--;
			//for(int j=l;j<=r;j++)
			//	ans+=a[j];
			cout<<b[r]-b[l]<<endl;
		}
	}
}
