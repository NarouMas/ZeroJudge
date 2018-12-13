#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int h,ans;
	while(cin>>a[0])
	{
		for(int i=1;i<10;i++)
			cin>>a[i];
		cin>>h;
		ans=0;
		for(int i=0;i<10;i++)
			if(h+30>=a[i])
				ans++;
		cout<<ans<<endl;
	}
}
