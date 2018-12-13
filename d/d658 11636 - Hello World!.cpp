#include<iostream>
using namespace std;

int main()
{
	int n,ans,t;
	t=1;
	while(cin>>n)
	{
		if(n<0)
			break;
		ans=0;
		for(int i=1;i<n;i*=2)
			ans++;
		cout<<"Case "<<t<<": "<<ans<<endl;
		t++;
	}
}
