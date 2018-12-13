#include<iostream>
using namespace std;

int main()
{
	int a;
	int max,t;
	while(cin>>a)
	{
		max=-1;
		a/=2;
		for(int i=1;i<=a/2;i++)
			if(i*(a-i)>max)
				max=i*(a-i);
		cout<<max<<endl;
	}
}
