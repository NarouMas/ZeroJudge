#include<iostream>
using namespace std;

int main()
{
	int a,b,n;
	while(cin>>a>>b)
	{
		n=(b-a)/2;
		if(b%2==0)
			n++;
		if(a%2==0&&b%2==1)
			n++;
		cout<<n<<endl;
	}
}
