#include<iostream>
using namespace std;

int main()
{
	long double a,k,i;
	int t;
	while(cin>>k)
	{
		a=0;
		for(i=1;a<k;i++)
		{
			a+=1/i;
			t=i;
		}
		cout<<t+1<<endl;
	}
}
