#include<iostream>
using namespace std;

long f91(long n)
{
	if(n<=100)
		return f91(f91(n+11));
	else
		return n-10;
}
int main()
{
	long n;
	while(cin>>n)
	{
		if(n==0)
			break;
		if(n>=101)
			cout<<"f91("<<n<<") = "<<n-10<<endl;
		else
			cout<<"f91("<<n<<") = "<<f91(n)<<endl;
	}
}
