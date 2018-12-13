#include<iostream>
using namespace std;

int main()
{
	long long a[7][8],n;
	n=1;
	for(int i=0;i<7;i++)
		for(int j=0;j<8;j++)
		{
			a[i][j]=n;
			n*=2;
		}
	int r,w;
	while(cin>>r>>w)
	{
		r--,w--; 
		cout<<a[r][w]<<endl;
	}
}
