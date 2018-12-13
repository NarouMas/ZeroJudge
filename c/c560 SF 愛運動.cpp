#include<iostream>
using namespace std;

int main()
{
	unsigned long long int a[100001],ans,ca;
	int br[100001];
	int n,m;
	a[1]=1,a[2]=1,a[3]=2;
	for(int i=4;i<100001;i++)
		a[i]=(a[i-1]+a[i-3])%1000000007;
	while(cin>>n>>m)
	{
		ans=1;
		for(int i=0;i<m;i++)
			cin>>br[i];
		for(int i=0;i<m;i++)
		{
			ca=ans;
			if(i>0)
			{
				for(long long j=0;j<a[br[i]-br[i-1]]-1;j++)
					ans=(ans+ca)%1000000007;
				//ans*=(a[br[i]-br[i-1]])%1000000007;
			}
				
			else
			{
				for(long long j=0;j<a[br[i]]-1;j++)
				{
					ans=(ans+ca)%1000000007;
					//cout<<"ans:"<<ans<<" ca:"<<ca<<" br:"<<a[br[j]]-1<<endl;
				}
				//ans*=(a[br[i]])%1000000007;
				//cout<<"b:"<<ans<<endl;
			}
			//cout<<"a:"<<ans<<endl;	
		}
		ca=ans;
		for(long long i=0;i<a[n-br[m-1]]-1;i++)
			ans=(ans+ca)%1000000007;
		//ans*=(a[n-br[m-1]])%1000000007;
		cout<<ans<<endl;
	}
}
