#include<iostream>
using namespace std;

int main()
{
	int n,t;
	int a[100],sum,ans;
	t=1;
	while(cin>>n)
	{
		if(n==0)
			break;
		sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sum=sum/n;
		ans=0;
		for(int i=0;i<n;i++)
			if(a[i]-sum>0)
				ans+=a[i]-sum;
		cout<<"Set #"<<t<<endl;
		cout<<"The minimum number of moves is "<<ans<<"."<<endl;
		t++;
	}
}
