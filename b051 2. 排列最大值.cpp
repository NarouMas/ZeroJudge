#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool cmp(int a,int b)
{
	int la,lb,ta,tb,t;
	la=log10(a)+1,lb=log10(b)+1;
	if(la==lb)
		return a>b;
	else
	{
		ta=a,tb=b;
		//cout<<"ta:"<<ta<<" tb:"<<tb<<endl;
		a*=pow(10,lb),b*=pow(10,la);
		t=1;
		while(tb>0)
			a+=tb%10*t,tb/=10,t*=10;
		t=1;
		while(ta>0)
			b+=ta%10*t,ta/=10,t*=10;
		//cout<<"a:"<<a<<" b:"<<b<<endl;
		return a>b;
	}
}

int main()
{
	int n,num[10000],c;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>num[i];
		sort(num,num+n,cmp);
		c=0;
		for(int i=0;num[i]==0&&i<n;i++)
			c++;
		for(int i=c;i<n;i++)
			cout<<num[i];
		for(int i=0;i<c;i++)
			cout<<"0";
		cout<<endl;
	}
}
