#include<iostream>
using namespace std;

int main()
{
	long long a[30],b[30];
	a[1]=1,a[2]=2;
	for(int i=3;i<30;i++)
		a[i]=a[i-1]+a[i-2];
	b[1]=1,b[2]=2,b[3]=4;
	for(int i=4;i<30;i++)
		b[i]=b[i-1]+b[i-2]+b[i-3];
	int t,k;
	while(cin>>t>>k)
	{
		k=k*-1;
		if(t==1)
			cout<<"1\n";
		else if(t==2)
			cout<<a[k]<<endl;
		else
			cout<<b[k]<<endl;
	}
}
