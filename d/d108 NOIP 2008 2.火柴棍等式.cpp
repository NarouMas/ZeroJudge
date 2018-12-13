#include<iostream>
using namespace std;

int main()
{
	int ans,n[10]={6,2,5,5,4,5,6,3,7,6};
	int k,l,t[3],z;
	while(cin>>k)
	{
		ans=0;
		for(int i=0;i<1000;i++)
		{
			for(int j=i;j<1000;j++)
			{
				l=i+j;
				t[0]=i,t[1]=j,t[2]=l;
				l=0;
				for(int q=0;q<3;q++)
				{
					while(t[q]>=10)
					{
						l+=n[t[q]%10];
						t[q]/=10;
					}
					l+=n[t[q]%10];	
				}
				//cout<<"i:"<<i<<" j:"<<j<<" l:"<<l<<endl;
				if(l==k-4)
				{
					ans++;
					if(i!=j)
						ans++;
				}				
			}
		}
		cout<<ans<<endl;
	}
}
