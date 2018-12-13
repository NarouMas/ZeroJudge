#include<iostream>
using namespace std;

int main()
{
	long long a,b[100000],n;
	b[0]=0;b[1]=1;
	for(int i=2;i<100000;i++)
		b[i]=1+b[i-1]+b[i-2];
	while(cin>>n)
	{
		if(n==-1)
			break;
		cout<<b[n]<<' '<<b[n+1]<<endl;
	}
} 
