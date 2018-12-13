#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long long an[100000]={1};
	int f[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
	for(int i=0;i<11;i++)
		for(int j=f[i];j<100000;j++)
			an[j]+=an[j-f[i]];
	double a;
	while(cin>>a)
	{		
		if(a==0)
			break;
		int t;
		t=100*a;
		if(t%5!=0) t+=1;
		cout<<fixed<<setprecision(2)<<a<<setw(17)<<an[t]<<endl;
		//cout<<t<<endl;
	}
}
