#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long double n,k,l,t,i;
	while(cin>>n>>k)
	{
		l=n-k;
		t=0;
		if(k<l)
			swap(k,l);
		for(i=n;i>k;i--)
		{
			t+=log10(i);
		}
			
		for(i=l;i>0;i--)
		{
			t-=log10(i);
			//cout<<"t:"<<t<<endl;
		}
			
		cout<<int(t)+1<<endl;	
	}
}
