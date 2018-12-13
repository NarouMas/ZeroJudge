#include<iostream>
using namespace std;

int main()
{
	int bin[32];
	unsigned int n;
	int t,ip[4];
	while(cin>>n)
	{
		for(int i=0;i<32;i++)
			bin[i]=0;
		for(int i=0;i<4;i++)
			ip[i]=0;
		t=0;
		while(n>0)
		{
			if(n%2==1)
				bin[t]++;
			t++,n/=2;
		}
		for(int i=0;i<4;i++)
		{
			for(int j=0,k=1;j<8;j++,k*=2)
			{
				ip[i]+=bin[i*8+j]*k;
			}
		}
		cout<<ip[3]<<"."<<ip[2]<<"."<<ip[1]<<"."<<ip[0]<<"\n";
	}
}
