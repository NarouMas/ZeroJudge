#include<iostream>
using namespace std;

int main()
{
	int n,h[10001];
	int a,ans;
	while(cin>>n)
	{
		ans=0;
		for(int i=0;i<n;i++)
			cin>>h[i];
		a=h[0];
		for(int i=1;i<n-1;i++)
		{
			if(h[i-1]<h[i])
				a=h[i-1];
			if(h[i]>a&&h[i]>h[i+1])
			{
				a=h[i];
				ans++;
			}
				
		}
		cout<<ans<<endl;
	}
}
