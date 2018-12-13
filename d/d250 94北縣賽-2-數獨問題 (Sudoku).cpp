#include<iostream>
using namespace std;

int main()
{
	char a[10];
	int sum;
	while(cin>>a)
	{
		sum=0;
		for(int i=0;i<9;i++)
			sum+=int(a[i]-'0');
		cout<<45-sum<<endl;
	}
}
