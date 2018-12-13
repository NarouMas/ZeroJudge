#include<iostream>
using namespace std;

int a[10000],ck;
int jos(int n,int m)
{
	/*if(k>=0)
	{
		if(n==1)
		{
			a[k]=0;
			cout<<"a["<<k<<"]:"<<a[k]<<endl;
			k--;
			return 0;
			
		}
		else
		{
			a[k]=(jos(n-1,m)+m)%n;
			cout<<"a["<<k<<"]:"<<a[k]<<endl;
			k--;
			return (jos(n-1,m)+m)%n;
		}
	}*/
	if(n==ck)
		return 0;
	else
		return (jos(n-1,m)+m)%n;
		
}
int main()
{
	int n,m,k;
	while(cin>>n>>m>>k)
	{
		//-jos(n,m);
		ck=n-k;
		cout<<jos(n,m)+1<<endl;
	}
}
