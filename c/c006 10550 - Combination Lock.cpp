#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	int ans;
	while(cin>>a>>b>>c>>d)
	{
		if(a==b&&b==c&&c==d&&a==0)
			break;
		ans=720;
		if(b-a>0)
			ans+=360-((b-a)*9);
		else
			ans+=360-((b-a+40)*9);
		ans+=360;
		if(b-c>0)
			ans+=360-((b-c)*9);
		else
			ans+=360-((b-c+40)*9);
		if(d-c>0)
			ans+=360-((d-c)*9);
		else
			ans+=360-((d-c+40)*9);
		cout<<ans<<endl;
	}
}
