#include<iostream>
using namespace std;

int main()
{
	long long a[200];
	int n;
	a[0]=1;
	for(int i=1;i<200;i++)
		a[i]=(i+1)*(i+1)+a[i-1];
	while(cin>>n)
	{
		if(n==0)
			break;
		cout<<a[n-1]<<endl;
	}
		
}
