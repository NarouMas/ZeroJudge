#include<iostream>
using namespace std;

int k[1000001];
int main()
{
	int n,l,r,ans;
	bool a[1000001];
	ios::sync_with_stdio(false);
	cin.tie(0);
	//for(int i=0;i<1000001;i++)
	//	a[i]=false;
	while(cin>>n)
	{	
		ans=0;
		while(n--)
		{
			cin>>l>>r;
			for(int i=l;i<r;i++)
			{
				if(!a[i])
				{
					k[ans]=i;
					ans++;
					a[i]=true;					
				}
			}
		}
		cout<<ans<<endl;
		for(int i=0;i<ans;i++)
			a[k[i]]=false;
	}
}
