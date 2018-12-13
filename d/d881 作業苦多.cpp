#include<iostream>
using namespace std;

int main()
{
	int d;
	long long sum;
	while(cin>>d)
	{
		sum=0;
		for(int i=1;i<51;i++)
			sum+=i+((i*i-3*i+3)/2)*d;
		cout<<sum<<endl;
	}
}
