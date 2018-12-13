#include<iostream>
using namespace std;

int main()
{
	int n,m,ans;
	while(cin>>n)
	{
		ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			ans+=m*10;
		}
		if(n!=0)
			cout<<(ans/n+5)/10<<endl;
		else
			cout<<"0\n";
	}
}
