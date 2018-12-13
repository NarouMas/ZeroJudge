#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int n;
	while(cin>>a>>b)
	{
		n=0;
		for(int i=a;i<=b;i++)
			if(i%2==0)
				n+=i;
		cout<<n<<endl;
	}
}
