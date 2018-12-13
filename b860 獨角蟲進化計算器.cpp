#include<iostream>
using namespace std;

int main()
{
	int c,w,a,ans;
	bool done;
	while(cin>>c>>w)
	{
		a=0,ans=0,done=false;
		while(!done)
		{
			while(c>=12&&w>0)
				ans++,c-=11,a++,w--;
			c+=a;
			a=0;
			if(c<12&&w>0)
				c++,w--;
			if(w==0)
				done=true;
		}
		cout<<ans<<endl;
	}
}
