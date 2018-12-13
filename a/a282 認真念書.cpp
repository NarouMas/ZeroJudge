#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	bool a[3000];
	int n,t;
	while(cin>>n)
	{
		for(int i=0;i<3000;i++)
			a[i]=false;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			a[t]=true;
		}
		for(int i=1;i<3000;i++)
		{
			if(!a[i])
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	/*int n;
	int a[3000];
	bool dis;
	while(cin>>n)
	{
		dis=false;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		if(a[0]!=1)
		{
			dis=true;
			cout<<"1\n";
		}
			
		else
		{
			for(int i=1;i<n;i++)
			{
				if(a[i]-a[i-1]>1)
				{
					cout<<a[i-1]+1<<endl;
					dis=true;
					break;
				}
			}
		}
		if(!dis)
			cout<<a[n-1]+1<<endl;
	}*/
}
