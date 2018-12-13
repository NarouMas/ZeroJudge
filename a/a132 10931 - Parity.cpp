#include<iostream>
using namespace std;

int main()
{
	int num;
	int bin[100000];
	int n;
	int k;
	int ans;
	while(cin>>num)
	{
		k=num;
		n=0,ans=0;
		if(num==0)
			break;
		while(num!=1)
		{
			bin[n]=num%2;
			num/=2;
			n++;
		}
		bin[n]=1;
		for(int i=n;i>=0;i--)
			if(bin[i]==1)
				ans++;
		cout<<"The parity of ";
		for(int i=n;i>=0;i--)
			cout<<bin[i];
		cout<<" is "<<ans<<" (mod 2).\n";
	}
}
