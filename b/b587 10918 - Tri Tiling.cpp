#include<iostream>
using namespace std;

int main()
{
	int a[10000];
	for(int i=1;i<10000;i+=2)
		a[i]=0;
	a[0]=1,a[2]=3,a[4]=11;
	for(int i=6;i<10000;i+=2)
	{
		a[i]+=a[i-2]*3;
		for(int j=i-4;j>=0;j-=2)
		{
			a[i]+=a[j]*2;
		}
	}
		
	int n;
	while(cin>>n)
	{
		if(n==-1)
			break;
		cout<<a[n]<<endl;
	}
		
}
