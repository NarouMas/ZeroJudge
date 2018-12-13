#include<iostream>
#include<cstring>
using namespace std;

bool p[505][505];

int main()
{
	int n,m,t,ans;
	int x1,x2,y1,y2;
	while(cin>>n>>m>>t)
	{
		memset(p,false,sizeof(p));
		ans=0;
		while(t--)
		{
			cin>>x1>>y1>>x2>>y2;
			if(y1==y2)
			{
				while(x1!=x2)
				{
					if(!p[x1][y1])
						ans++,p[x1][y1]=true;
					if(x1>x2)
						x1--;
					else
						x1++;
				}
				if(!p[x2][y2])
					ans++,p[x2][y2]=true;
			}
			if(x1==x2)
			{
				while(y1!=y2)
				{
					if(!p[x1][y1])
						ans++,p[x1][y1]=true;
					if(y1>y2)
						y1--;
					else
						y1++;
				}
				if(!p[x2][y2])
					ans++,p[x2][y2]=true;
			}
			else
			{
				while(x1!=x2)
				{
					if(!p[x1][y1])
						ans++,p[x1][y1]=true;
					if(x1>x2)
						x1--;
					else
						x1++;
					if(y1>y2)
						y1--;
					else
						y1++;
				}
				if(!p[x2][y2])
					ans++,p[x2][y2]=true;
			}
		}
		cout<<ans<<endl;
	}
}
