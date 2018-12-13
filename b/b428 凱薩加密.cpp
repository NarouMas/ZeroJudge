#include<iostream>
using namespace std;

int main()
{
	char a[1000],b[1000];
	int ans;
	while(cin>>a>>b)
	{
		ans=int(b[0]-a[0]);
		if(ans<0)
			ans=26+ans;
		cout<<ans<<endl;
	}
}
