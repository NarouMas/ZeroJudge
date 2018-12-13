#include<iostream>
#include<cmath>
#define size 20000000
using namespace std;
bool prime[size];
int p[100000];
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
	int s;
	s=0;
	for(int i=2;s<100000;i++)
		if(!prime[i]&&!prime[i+4])
		{
			p[s]=i;
			s++;
		}
	while(cin>>s)
	{
		cout<<"("<<p[s-1]<<", "<<p[s-1]+4<<")"<<endl;
	}
}
