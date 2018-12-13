#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int n;
	while(cin>>a>>b)
	{
		n=0;
		if(a>b)
		{
			int t;
			t=a;
			a=b;
			b=t;
		}
		for(int i=a;i<=b;i++)
			if(i%2==0)
				n+=i;
		cout<<n<<endl;
	}
}
