#include<iostream>
using namespace std;

int main()
{
	int n,r,t,cn;
	int re[105];
	bool done;
	while(cin>>n)
	{
		re[0]=n,r=1,done=true,cn=n;
		while(done)
		{
			n=re[r-1],t=0;
			while(n>0)
			{
				t+=(n%10)*(n%10);
				n/=10;
			}
			//cout<<"t:"<<t<<endl;
			if(t==1)
			{
				cout<<cn<<" is a happy number\n";
				done=false;
			}
			else
			{
				for(int i=0;i<r;i++)
					if(t==re[i])
					{
						cout<<cn<<" is an unhappy number\n";
						done=false;
					}
				if(done)
					re[r++]=t;
			}
		}
	}
}
