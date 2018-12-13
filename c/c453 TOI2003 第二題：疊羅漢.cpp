#include<iostream>
using namespace std;

int main()
{
	int n;
	unsigned long long int pa[30][30];
	pa[1][1]=1,pa[2][1]=1,pa[2][2]=2;
	for(int i=3;i<30;i++)
		pa[i][1]=1;
	for(int i=3;i<30;i++)
	{
		for(int j=2;j<=i;j++)
		{
			if(i!=j)
			{
				pa[i][j]=0;
				for(int l=1;l<=j;l++)
					pa[i][j]+=pa[i-1][l];
			}
			else
			{
				pa[i][j]=pa[i][j-1]+pa[i-1][j-1];
			}
		}
	}
	while(cin>>n)
	{
		cout<<pa[n][n]<<endl;
	}
}
