#include<iostream>
using namespace std;

int main()
{
	int n,min,tn,tp;
	int p[3],t[3];
	while(cin>>n)
	{
		for(int i=0;i<3;i++)
			cin>>t[i]>>p[i];
		for(int i=0;i<3;i++)
		{
			tn=tp=0;
			while(tn<n)
			{
				tn+=t[i],tp+=p[i];
			}
			if(tp<min||i==0)
				min=tp;
		}
		cout<<min<<endl;
	}
}
