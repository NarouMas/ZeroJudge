#include<iostream>
using namespace std;

struct retangle
{
	long long x1,y1;
	long long x2,y2;
	long long area;
};

int main()
{
	long long m,n,ans;
	long long x1,y1,x2,y2,x,y;
	retangle re[40];
	while(cin>>m>>n)
	{
		for(int i=0;i<m;i++)
		{
			cin>>x1>>y1>>x2>>y2;
			if(x1>x2)
				swap(x1,x2);
			if(y1<y2)
				swap(y1,y2);
			re[i].x1=x1,re[i].y1=y1;
			re[i].x2=x2;re[i].y2=y2;
			re[i].area=(x2-x1)*(y1-y2);
			//cout<<"re["<<i<<"] x1:"<<re[i].x1<<" y1:"<<re[i].y1<<" x2:"<<re[i].x2<<" y2:"<<re[i].y2<<endl;
		}
		while(n--)
		{
			ans=0;
			cin>>x>>y;
			for(int i=0;i<m;i++)
			{
				if(x>=re[i].x1&&x<=re[i].x2&&y<=re[i].y1&&y>=re[i].y2)
				{
					//cout<<"i:"<<i<<"area:"<<re[i].area<<endl;
					ans+=re[i].area;
				}
			}
			cout<<ans<<endl;
		}
	}
}
