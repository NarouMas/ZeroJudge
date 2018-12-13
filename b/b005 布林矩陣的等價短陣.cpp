#include<iostream>
using namespace std;

int x[105][105];
struct point
{
	int x;
	int y;
};

int main()
{
	int n,sum;
	int dis;
	point p;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>x[i][j];
		dis=1;
		for(int i=1;i<=n;i++)
		{
			sum=0;
			for(int j=1;j<=n;j++)
				sum+=x[i][j];
			//cout<<"s:"<<sum<<endl;
			if(sum%2==1)
			{
				if(dis==0)
					dis=2;
				else if(dis==1)
				{
					dis=0;
					p.x=i;
				}
			}
		}
		if(dis!=2)
			for(int i=1;i<=n;i++)
			{
				sum=0;
				for(int j=1;j<=n;j++)
					sum+=x[j][i];
				if(sum%2==1)
				{
					if(dis==0)
					{
						dis=3;
						p.y=i;
					}
					else if(dis==1||dis==3)
					{
						dis=2;
					}
				}
			}
		if(dis==2)
			cout<<"Corrupt\n";
		else if(dis==1)
			cout<<"OK\n";
		else
			cout<<"Change bit ("<<p.x<<","<<p.y<<")\n";
	}
}
