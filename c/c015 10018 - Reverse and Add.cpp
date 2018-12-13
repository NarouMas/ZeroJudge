#include<iostream>
using namespace std;

bool dis(int);
int reverse(int);

int main()
{
	int n,n1,n2,l,ans;
	char p[100];
	while(cin>>n)
	{
		while(n--)
		{
			cin>>p;
			n1=n2=0;
			ans=1;
			for(int i=0;p[i]!='\0';i++)
				l=i;
			for(int i=0,t=1;i<=l;i++,t*=10)
			{
				n1+=int(p[i]-'0')*t;
				n2+=int(p[l-i]-'0')*t;
			}
			//cout<<"n:"<<n1<<" "<<n2<<endl;
			while(!dis(n1+n2))
			{
				n1=n1+n2;
				n2=reverse(n1);
				ans++;
			}
			cout<<ans<<" "<<n1+n2<<endl;
		}
	}
}

int reverse(int n)
{
	int p[20];
	int t=0,n2=0;
	while(n>0)
	{
		p[t]=n%10;
		n/=10;
		t++;
	}
	for(int i=t-1,j=1;i>=0;i--,j*=10)
		n2+=p[i]*j;
	return n2;
}

bool dis(int n)
{
	int d[20],t;
	bool r;
	t=0;
	while(n>0)
	{
		d[t]=n%10;
		n/=10;
		t++;
	}
	r=true;
	for(int i=0;i<t/2;i++)
		if(d[i]!=d[t-i-1])
		{
			r=false;
			break;
		}
	return r;
}
