#include<iostream>
#include<cmath>
#define size 20000000
using namespace std;
bool prime[size];
int tp [10000];
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
	long n=0,s;
	s=3;
	while(n<100000)
	{
		if(!prime[s]&&!prime[s+2])
		{
			tp[n]=s;
			//cout<<tp[n]<<" "<<n<<endl;
			n++;
		}
		s++;
	}
	while(cin>>s)
	{
		cout<<"("<<tp[s-1]<<", "<<tp[s-1]+2<<")\n";
	}
}
