#include<iostream>
using namespace std;

struct stu
{
	int n;
	bool inside;
};

int main()
{
	stu s[1001];
	int k,x,c,sn,ans,cur;
	bool dis;
	while(cin>>k)
	{
		ans=0,cur=0,sn=0;
		for(int i=0;i<k;i++)
		{
			cin>>x>>c;
			dis=true;
			for(int j=0;j<sn;j++)
			{
				if(s[j].n==x)
				{
					dis=false;
					if(s[j].inside)
					{
						cur--;
						s[j].inside=false;
					}
					else
					{
						cur++;
						s[j].inside=true;
					}
				}
			}
			if(dis)
			{
				s[sn].n=x;
				if(c==1)
				{
					cur++;
					s[sn].inside=true;
				}
				else
				{
					s[sn].inside=false;
				}
				sn++;
			}
			if(cur>ans)
				ans=cur;
		}
		cout<<ans<<endl;
	}
}
