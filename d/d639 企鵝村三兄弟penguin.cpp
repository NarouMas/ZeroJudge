#include<iostream>
using namespace std;

int main()
{
	long long a[4];
	int n,t,ans;
	bool d;
	while(cin>>t)
	{
		a[0]=a[1]=a[2]=1;
		d=false;
		n=3;
		while(t>3)
		{
			a[n%4]=(a[(n+1)%4]+a[(n+2)%4]+a[(n+3)%4])%10007;
			//cout<<"a:"<<a[(n+3)%4]<<endl;			
			//cout<<"d:"<<a[n%4]<<endl;
			if(t==4)
			{
				cout<<a[n%4]<<endl;
				d=true;
			}
			n++,t--;
		}
		if(!d)
			cout<<a[t-1]<<endl;
	}
}
