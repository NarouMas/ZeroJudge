#include<iostream>
using namespace std;

int main()
{
	int a1,b1,a2,b2,t1,t2,ans;
	while(cin>>a1>>b1>>a2>>b2)
	{
		t1=a1*60+b1;
		t2=a2*60+b2;
		ans=t2-t1;
		if(ans<0)
			ans+=1440;
		cout<<ans/60<<' '<<ans%60<<endl;
	}
}
