#include<iostream>
using namespace std;

int main()
{
	long double a[1000],c,t;
	a[0]=0,a[1]=0.5;
	for(long double i=2;i<1000;i++)
	{
		int ci=i;
		t=1/(i+1);
		//cout<<t<<endl;
		a[ci]=a[ci-1]+t;
	}
		
	while(cin>>c)
	{
		//cout<<a[2]<<endl;
		for(int i=0;i<999;i++)
			if(c>a[i]&&c<=a[i+1])
			{
				cout<<i+1<<" card(s)"<<endl;
				break;
			}
	}
}
