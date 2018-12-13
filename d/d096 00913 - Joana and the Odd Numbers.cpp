#include<iostream>
using namespace std;

int main()
{
	unsigned long long ans,a,n;
	/*for(int i=1,j=1,k=5;i<size;i++)
	{
		a[i]=2*j+1;
		j+=k;
		k+=2;
	}*/
	while(cin>>n)
	{
		n=(n-1)/2;
		a=n+(n+2)*(n-1);
		/*for(int j=1,k=5;j<n;j++)
		{
			a+=k;
			k+=2;
		}*/
		//cout<<"a:"<<a<<endl;
		ans=0;
		ans=(2*a+1)+(2*(a+1)+1)+(2*(a+2)+1);
		cout<<ans<<endl;
	}
}
