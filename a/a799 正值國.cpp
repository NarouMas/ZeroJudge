#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n<0)
			n=n*-1;
		cout<<n<<endl;
	}
}
