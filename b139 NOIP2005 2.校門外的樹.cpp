#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int l,m,a,b,ans;
	bool dis[10005];
	while(cin>>l>>m)
	{
		memset(dis,false,sizeof(dis));
		
		while(m--)
		{
			cin>>a>>b;
			for(int i=a;i<=b;i++)
				dis[i]=true;
		}
		ans=0;
		for(int i=0;i<=l;i++)
			if(!dis[i])
				ans++;
		cout<<ans<<endl;
	}
}
