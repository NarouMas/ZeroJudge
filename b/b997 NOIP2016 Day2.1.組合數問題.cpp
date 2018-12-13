#include<iostream>
using namespace std;


/*unsigned long long int com(int a,int b)
{
	if(a==b)
		return 1;
	else if(b==0)
		return 1;
	else
		return com(a-1,b-1)+com(a-1,b);
}*/
unsigned long long int c[2100][2100],k;
int main()
{
	int t,n,m,ans;
	
	for(int i=0;i<2100;i++)
		c[i][0]=1,c[i][i]=1;
	for(int i=1;i<2100;i++)
		for(int j=1;j<2100;j++)
			c[i][j]=c[i-1][j-1]+c[i-1][j];
	//while(cin>>t>>k)
	//	cout<<com(t,k)<<endl;
	while(cin>>t>>k)
	{
		while(t--)
		{
			ans=0;
			cin>>n>>m;
			for(int i=0;i<=n;i++)
				for(int j=0;j<=m&&j<=i;j++)
				{
					//if(j>=i)
					//{
						//cout<<"j:"<<j<<" i:"<<i<<endl;
						if(c[i][j]%k==0)
						{
							ans++;
							//cout<<"j:"<<j<<" i:"<<i<<" "<<"com:"<<com(j,i)<<' '<<k<<endl;
						}
							
					//}
					
				}
			cout<<ans<<endl;
		}
	}
}
