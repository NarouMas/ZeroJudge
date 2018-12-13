#include<iostream>
using namespace std;

int main()
{
	int n,t,k,l,cn;
	int a[20];
	
	while(cin>>n)
	{
		t=1,cn=n;
		while(n--)
			t*=2;
		n=cn;
		for(int i=0;i<t;i++)
		{
			k=i,l=0,cn=n;
			for(int j=0;j<20;j++)
				a[j]=0;
			while(k>1)
			{
				if(k%2==0)
					a[l]=0;
				else
					a[l]=1;
				k/=2;
				l++;
			}
			if(i!=0)
				a[l]=1;
			//cout<<"l="<<l<<"cn="<<cn<<endl;
			while(l<cn-1)
			{
				cout<<'0';
				cn--;
			}
			for(int j=l;j>=0;j--)
				cout<<a[j];
			cout<<endl;
		}
	}
}
