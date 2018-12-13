#include<iostream>
#define size 1000000
using namespace std;

long long r[size];

int main()
{
	long long s,m,w,sq,all,ans[1000],mod;
	int n,t;
	sq=-1;
	bool dis,in;
	mod=100000007;
	while(cin>>s)
	{
		if(s==0)
			break;
		if(sq!=-1)
			cout<<endl;
		m=1,sq=1,n=0,dis=false;
		while(s-(sq*2)>0)
		{
			//cout<<"s:"<<s<<" sq*2:"<<sq*2<<endl;
			all=s+(m*2),in=false,t=0,r[0]=1;
			for(int i=2;i<=all/r[0];i++)
			{
				if(all%i==0)
					r[t]=i,t++;
				if(i*i>all&&r[0]==1)
				{
					r[0]=all;
					break;
				}
			}
			//cout<<"all:"<<all<<endl;
			//for(int i=0;i<t;i++)
			//	cout<<"r:"<<r[i]<<endl;
			for(int i=0;i<t&&!in;i++)
			{
				w=all/r[i];
				if((r[i]-(sq*2))%3==0&&w>sq&&(w-sq)%2==0)
				{
					if((r[i]-(sq*2))/3==(w-sq)/2)
					{
						in=true,dis=true;
						ans[n]=(m*2)%mod;
						n++;
						cout<<"all:"<<all<<" r:"<<(sq*2)+(i*3)<<" w:"<<w<<" m:"<<m<<" i:"<<i<<" (w-sq)/2:"<<(w-sq)/2<<endl;
					}
				}
				
			}
			sq++;
			m=sq*sq;
		}
		//cout<<"s:"<<s<<" sq:"<<sq<<endl;
		n--;
		if(dis)
			for(int i=n;i>=0;i--)
				cout<<"Possible Missing Soldiers = "<<ans[i]<<endl;
		else
			cout<<"No Solution Possible\n"; 
	}
}
