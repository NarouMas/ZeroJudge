#include<iostream>
using namespace std;

int main()
{
	long long a,b,c,ta,tc;
	while(cin>>a>>b>>c)
	{
		ta=a,tc=c;
		while(ta>=10&&tc>=2)
		{
			ta-=10,tc-=2;
			b+=1;
		}
		cout<<a<<" 個餅乾，"<<b<<" 盒巧克力，"<<c<<" 個蛋糕。\n";
	}
}
