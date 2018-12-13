#include<iostream>
using namespace std;

struct stu
{
	int fri;
	bool d;
};

int main()
{
	int n,ans;
	bool dis;
	stu s[50001];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>s[i].fri;
			s[i].d=true;
		}
		ans=0;
		for(int i=0,j=i;i<n;i++)
		{
			dis=false,j=i;
			while(s[j].d)
			{
				s[j].d=false;
				j=s[j].fri;
				dis=true;
			}
			if(dis)
				ans++;
		}
		cout<<ans<<endl;
	}
}
