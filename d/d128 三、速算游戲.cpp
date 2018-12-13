#include<iostream>
using namespace std;

int main()
{
	int a,b,c,max,t,l;
	while(cin>>a>>b>>c)
	{
		max=-1;
		t=a*10+b,l=b*10+c;
		if(a+b+c>max)
			max=a+b+c;
		if(a*b*c>max)
			max=a*b*c;
		if(a*b+c>max)
			max=a*b+c;
		if(a+b*c>max)
			max=a+b+c;
		if(t+c>max)
			max=t+c;
		if(t*c>max)
			max=t*c;
		if(a+l>max)
			max=a+l;
		if(a*l>max)
			max=a*l;
		cout<<max<<endl;
		
	}
}
