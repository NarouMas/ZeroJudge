#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int r,c,m;
	while(cin>>r>>c>>m)
	{
		int t,k[m];
		if(r>=c)
			t=r;
		else
			t=c;
		int num[t][t],numc[t][t];
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				cin>>num[i][j];
		for(int i=0;i<m;i++)
			cin>>k[i];
		for(int i=m-1;i>=0;i--)
		{
			if(k[i]==0)
			{
				for(int i=0;i<r;i++)
					for(int j=0;j<c;j++)
						numc[i][j]=num[i][j];
				for(int i=0;i<c;i++)
					for(int j=0;j<r;j++)
						num[i][j]=numc[j][c-1-i];
						
				swap(r,c);
				/*int temp;
				temp=r;
				r=c;
				c=temp;*/
			}
			else
			{
				int tt;
				for(int i=0;i<r/2;i++)
					for(int j=0;j<c;j++)
					{
						swap(num[i][j],num[r-1-i][j]);
						//tt=num[i][j];
						//num[i][j]=num[r-1-i][j];
						//num[r-1-i][j]=tt;
					}
					
			}
		}
			
			
		
		cout<<r<<' '<<c<<endl;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(j!=c-1)
					cout<<num[i][j]<<' ';
				else
					cout<<num[i][j];	
			}
				
			cout<<endl;
		}
			
	}
}
