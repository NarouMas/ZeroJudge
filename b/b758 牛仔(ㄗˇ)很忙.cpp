#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int t;
	while(cin>>a>>b)
	{
		t=a*60+b;
		t+=150;
		if(t>=1439)
			t-=1440;
		
		if(t/60<10)
			cout<<"0"<<t/60<<":";
		else
			cout<<t/60<<":";
		
		if(t%60<10)
			cout<<"0"<<t%60<<"\n";
		else
			cout<<t%60<<"\n";
	}
} 
