#include<iostream>
#include<cstring>
using namespace std;

int lcs[105][105];

int main()
{
	int n1,n2,t;
	int a[105],b[105];
	t=1;
	while(cin>>n1>>n2)
	{
		if(n1==n2&&n1==0)
			break;
		memset(lcs,0,sizeof(lcs));
		for(int i=0;i<n1;i++)
			cin>>a[i];
		for(int i=0;i<n2;i++)
			cin>>b[i];
		
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
			{
				if(a[i]==b[j])
				{
					lcs[i+1][j+1]=lcs[i][j]+1;
				}
				else
				{
					if(lcs[i][j+1]>lcs[i+1][j])
						lcs[i+1][j+1]=lcs[i][j+1];
					else
						lcs[i+1][j+1]=lcs[i+1][j];
				}
			}
		}
		cout<<"Twin Towers #"<<t<<endl;
		cout<<"Number of Tiles : "<<lcs[n1][n2]<<endl;
		t++;
	}
}
