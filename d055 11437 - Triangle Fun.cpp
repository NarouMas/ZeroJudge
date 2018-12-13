#include<iostream>
using namespace std;

int main()
{
	long double ax,ay,bx,by,cx,cy,ans;
	int n;
	long long out;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>ax>>ay>>bx>>by>>cx>>cy;
			ans=(ax*by+bx*cy+cx*by-bx*ay-cx*by-ax*cy)/14.0;
			if(ans<0)
				ans*=-1;
			ans+=0.5;
			out=ans;
			cout<<ans<<endl;
		}
	}
}
