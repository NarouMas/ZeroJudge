#include<iostream>
using namespace std;

int main()
{
	long long n,sum;
	while(cin>>n)
	{
		sum=0;
		for(int i=1;i<n;i++)
			if(n%i==0)
				sum+=i;
		if(sum>n)
			cout<<"�ռ�\n";
		else if(sum==n)
			cout<<"������\n";
		else
			cout<<"����\n";
	}
}
