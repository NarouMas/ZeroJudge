#include<iostream>
using namespace std;

int main()
{
	int w,h,k;
	while(cin>>w>>h)
	{
		char a[h][w*2+1];
		for(int i=0;i<h;i++)
			a[i][0]=' ';
		for(int i=0;i<w*2+1;i++)
			a[0][i]=' ';
		for(int i=0;i<h;i++)
			for(int j=1;j<=w*2-1;j++)
				cin>>a[i][j];
		
		for(int i=1;i<=w*2-1;i+=2)
		{
			k=i;
			for(int j=0;j<h;j++)
			{
				if(a[j][k-1]=='-')
					k-=2;
				else if(a[j][k+1]=='-')
					k+=2;
				
			}
			cout<<(k+1)/2<<' ';
		}
		cout<<endl;
	}
}
/*
3 3
|-|.|
|-|.|
|.|-|
*/
