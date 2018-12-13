#include<iostream>
using namespace std;

int inverse(int a,int m)
{
	int d=m,x=0,s=1,q,r,t;
	while(a!=0)
	{
		q=d/a,r=d%a;
		d=a,a=r;
		t=x-q*s,x=s,s=t;
	}
	if(d!=1)
		return -1;
	else
		return (x+m)%m;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,n,ans;
	while(cin>>a>>n)
	{
		ans=inverse(a,n);
		if(ans==-1||ans==0)
			cout<<"No Inverse\n";
		else
			cout<<ans<<"\n";
	}
}
