#include<iostream>
#include<sstream>
#include<cmath>
#define sizes 10000000
using namespace std;
bool prime[sizes];
void setprime()
{
	int sqrt_20000000=sqrt(sizes);
	prime[0]=prime[1]=true;
	for(int i=0;i<sqrt_20000000;i++)
		if(!prime[i])
			for(int k=(sizes-1)/i,j=i*k;k>=i;k--,j-=i)
				if(!prime[k])
					prime[j]=true;
}

struct Num
{
	int a;
	int b;
};

int main()
{
	Num num[10000];
	string s;
	int a,b,n,t,c;
	while(getline(cin,s))
	{
		if(s[0]=='0'&&s.size()==1)
			break;
		n=1;
		stringstream ss(s);
		while(ss>>a>>b)
		{
			n*=pow(a,b);
		}
		n--,t=2,c=0;
		for(int i=0;i<10000;i++)
			num[i].b=0;
		while(n!=1)
		{
			if(!prime[t])
			{
				if(n%t==0)
				{
					num[c].a=t;
					num[c].b++;
					n/=t;
				}
				else
				{
					t++;
					if(num[c].b!=0)
						c++;
				}
			}
		}
		if(num[c].b!=0)
			c++;
		for(int i=c-1;i>=0;i--)
			cout<<num[i].a<<" "<<num[i].b<<" ";
		cout<<endl;
		s.clear();
	}
}
