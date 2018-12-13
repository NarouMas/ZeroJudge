#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	int t1,t2;
	while(cin>>a>>b>>c>>d)
	{
		if(a==b&&b==c&&c==d&&a==0)
			break;
		t1=a*60+b;
		t2=c*60+d;
		t1=t2-t1;
		if(t1<0)
			t1+=1440;
		cout<<t1<<endl;
	}
}
