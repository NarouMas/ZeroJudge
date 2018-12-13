#include<iostream>
using namespace std;

int main()
{
	int x1,x2,y1,y2;
	int n;
	int r1,r2,mina,minb,ans;
	while(cin>>x1>>y1>>x2>>y2)
	{
		cin>>n;
		int xi[n],yi[n];
		ans=0;
		mina=minb=-1;
		for(int i=0;i<n;i++)
		{
			cin>>xi[i]>>yi[i];
			r1=(x1-xi[i])*(x1-xi[i])+(y1-yi[i])*(y1-yi[i]);
			r2=(x2-xi[i])*(x2-xi[i])+(y2-yi[i])*(y2-yi[i]);
			if(r1<=r2&&mina<r1)
				mina=r1;
			else if(r2>r1&&minb<r2)
				minb=r2;				
		}
		if(mina!=-1)
			ans+=mina;
		if(minb!=-1)
		ans+=minb;
		cout<<ans<<endl;
	}
}
