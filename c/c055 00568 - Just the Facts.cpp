#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long n,ans;
	while(cin>>n)
	{
		ans=1;
		for(int i=2;i<=n;i++)
		{
			while(ans%10==0)
				ans/=10;
			/*if(i<10)
				ans%=10;
			else if(i<=10&&i<100)
				ans%=100;
			else if(i<=100&&i<1000)
				ans%=1000;
			else if(i<=1000&&i<100000)
				ans%=10000;
			else
				ans%=100000;*/
			ans%=100000;
			ans*=i;
		}
		while(ans%10==0)
			ans/=10;
		cout<<setw(5)<<n<<" -> "<<ans%10<<endl;
	}
}
