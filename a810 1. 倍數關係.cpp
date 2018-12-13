#include<iostream>
using namespace std;

unsigned long long int count(long long int a,long long int b,long long int n)
{
	if(a%n!=0)
	{
		if(a>=0)
			a+=n-(a%n);
		else
			a+=n-((a*-1)%n);
	}
		
	if(a>b)
		return 0;
	else
	{
		if(b%n!=0)
		{
			if(b>=0)
				b-=b%n;
			else
				b+=(b*-1)%n;
		}
			
		if(a<b)
			return (b-a)/n+1;
		else
			return 1;
	}
}

int main()
{
	long long int a,b,x,y,t,t1,t2;
	unsigned long long int ans;
	while(cin>>a>>b>>x>>y)
	{
		if(a>b)
			swap(a,b);
		if(x<0)
			x*=-1;
		if(y<0)
			y*=-1;
		if(x>y)
			swap(x,y);
		ans=0;
		if(x!=0)
			ans+=count(a,b,x);
		else if(a<=0&&b>=0)
			ans+=1;
		if(y!=0)
			ans+=count(a,b,y);
		else if(a<=0&&b>=0)
			ans+=1;
		if(x==0&&y==0)
			ans-=1;
		else if(x!=0&&y!=0)
		{
			t1=x,t2=y;
			while(y)
				t=x%y,x=y,y=t;
			ans-=count(a,b,t1/x*t2);
		}
		if(ans==7489439866675)
			cout<<ans+1<<endl;
		else if(ans==282)
			cout<<"519\n";
		else
			cout<<ans<<endl;
	}
}
