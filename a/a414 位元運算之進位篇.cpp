#include<iostream>
using namespace std;

int main()
{
	int n,t,ans;
	int a[33];
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n)
	{
		if(n==0)
			break;
		t=0;
		while(n>1)
		{
			if(n%2==0)
				a[t]=0;
			else
				a[t]=1;
			n/=2;
			t++;
		}
		a[t]=1,a[t+1]=0;
		//for(int i=0;i<t+2;i++)
		//	cout<<a[i];
		//cout<<endl;
		for(int i=0;i<33;i++)
			if(a[i]!=1)
			{
				//cout<<"a["<<i<<"]="<<a[i]<<endl;
				ans=i;
				break;
			}
				
		cout<<ans<<"\n";
	}
}
