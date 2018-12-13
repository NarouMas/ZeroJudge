#include<iostream>
using namespace std;

int main()
{
	int a,b,c,t;
	bool tand,tor,txor;
	while(cin>>a>>b>>c)
	{
		tand=tor=txor=false;
		if(a!=0&&b!=0)
			t=1;
		else
			t=0;
		if(t==c)
			tand=true;
		
		if(a!=0||b!=0)
			t=1;
		else
			t=0;
		if(t==c)
			tor=true;
			
		if(a!=0 xor b!=0)
			t=1;
		else
			t=0;
		if(t==c)
			txor=true;
		if(!tand&&!tor&&!txor)
			cout<<"IMPOSSIBLE\n";
		else
		{
			if(tand)
				cout<<"AND\n";
			if(tor)
				cout<<"OR\n";
			if(txor)
				cout<<"XOR\n";
		}
	}
}
