#include<iostream>
using namespace std;

int main()
{
	int n,ans,t;
	int a[10000];
	bool done;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		ans=0,done=false;
		while(!done)
		{
			for(int i=0;i<n-1;i++)
				if(a[i]>a[i+1])
				{
					swap(a[i],a[i+1]);
					ans++;
				}
			done=true;
			for(int i=0;i<n-1;i++)
				if(a[i]>a[i+1])
				{
					done=false;
					break;
				}
		}
		cout<<ans<<endl;
	}
}
