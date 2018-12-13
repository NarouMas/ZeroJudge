#include<iostream>
using namespace std;

int main()
{
	int k,n,a[1000],b[1000];
	while(cin>>k)
	{
		n=0;
		for(int i=k+1;i<=k*2;i++)
		{
			if((i*k)%(i-k)==0)
				a[n]=(i*k)/(i-k),b[n]=i,n++;
		}
		cout<<n<<endl;
		for(int i=0;i<n;i++)
			cout<<"1/"<<k<<" = 1/"<<a[i]<<" + 1/"<<b[i]<<endl;
	}
}
