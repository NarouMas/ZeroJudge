#include<iostream>
#include<cmath>
#include<sstream>
#define size 10000000
using namespace std;
bool prime[size];
void setprime()
{
	int sqrt_20000000=sqrt(size);
	prime[0]=prime[1]=true;
	for(int i=0;i<sqrt_20000000;i++)
		if(!prime[i])
			for(int k=(size-1)/i,j=i*k;k>=i;k--,j-=i)
				if(!prime[k])
					prime[j]=true;
}

int main()
{
	setprime();
	int n[20000],t;
	unsigned long long int ans,sum;
	string s;
	s.clear();
	while(getline(cin,s))
	{
		t=0;
		stringstream ss(s);
		while(ss>>n[t])
			t++;
		ans=0,sum=0;
		for(int i=0;i<t;i++)
		{
			if(!prime[n[i]])
			{
				if(i==0)
					sum=n[i];
				else if(!prime[n[i-1]]&&n[i]>n[i-1])
					sum+=n[i];
				else
					sum=n[i];
				if(sum>ans)
					ans=sum;
			}
		}
		cout<<ans<<endl;
		s.clear();
	}
}
