#include<iostream>
#include<sstream>
#define lld long long int
using namespace std;

lld inverse(int a,int m)
{
	lld d=m,x=0,s=1,q,r,t;
	while(a!=0)
	{
		q=d/a,r=d%a;
		d=a,a=r;
		t=x-q*s,x=s,s=t;
	}
	return (x+m)%m;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	lld n,p[20],k[20],y[20],m[20];
	lld M,ans;
	int re[20],ren;
	bool dis;
	while(getline(cin,s))
	{
		stringstream ss(s);
		n=0,M=1,ren=0;
		for(int i=0;i<20;i++)
			re[i]=-1;
		while(ss>>p[n])
		{
			dis=false;
			for(int i=0;i<n;i++)
				if(p[i]==p[n])
				{
					dis=true;
					re[ren]=n;
					n++;
				}
			if(dis)
				continue;
			M*=p[n];
			n++;
		}
		//cout<<"M:"<<M<<endl;
		ans=0;
		for(int i=0,j=0;i<n;i++)
		{
			cin>>k[i];
			if(i==re[j])
				continue;
			m[i]=M/p[i];
			y[i]=inverse(m[i],p[i]);
			//cout<<"i:"<<i<<" y: "<<y[i]<<" m:"<<m[i]<<" p:"<<p[i]<<endl;
			ans+=m[i]*y[i]*k[i];
		}
		cin.ignore();
		cout<<ans%M<<"\n";
	}
}
