#include<iostream>
using namespace std;

int main()
{
	unsigned long long int n[64],a[10];
	int t;
	for(int i=0;i<10;i++)
		a[i]=0;
	n[0]=2,a[0]=2;
	for(int i=1;i<64;i++)
	{
		//if(i>=9)
		//	n[i]-=a[i%9];
		n[i]=a[(i-1)%10]*2+n[i-1]-a[i%10];
		a[i%10]=a[(i-1)%10]*2;
		
	}
	while(cin>>t)
		cout<<n[t]<<endl;
}
