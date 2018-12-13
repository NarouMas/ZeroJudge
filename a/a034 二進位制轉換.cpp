#include<iostream>
using namespace std;

int func(int);
int main()
{
	int num;
	while(cin>>num)
	{
	int num2[100000],num2i;
	int n=0;
	int bin;  //進位制數 
	num2i=num;
	bin=2; 
	while(num2i!=0)
	{
		int i;
		i=num2i%bin;
		num2i=num2i/bin;
		num2[n]=i;
		n++;
	}
	for(int i=n-1;i>-1;i--)
		cout<<num2[i];
	cout<<endl;
	}
}


