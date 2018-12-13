#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int w=100;
	while(cin>>n)
	{
		int ans[101];
		int v[n],c[n];
		for(int i=0;i<n;i++)
			cin>>v[i]>>c[i];
		
		for(int i=0;i<n;i++)
			for(int j=w;j-v[i]>=0;--j)
				ans[j]=max(ans[j],ans[j-v[i]] +c[i]);
		cout<<ans[n]<<endl;
	}
}
