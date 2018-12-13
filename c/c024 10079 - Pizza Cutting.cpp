#include<iostream>
using namespace std;

int main()
{
	long long a,n;
	while(cin>>a)
	{
		if(a<0)
			break;
		n=1;
		for(int i=1;i<=a;i++)
			n+=i;
		cout<<n<<endl;
	}
}
