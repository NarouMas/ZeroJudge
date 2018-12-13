#include<iostream>
using namespace std;

int main()
{
	int a,b,n;
	while(cin>>a>>b)
	{
		n=0;
		for(int i=a;i<=b;i++)
		{
			if(i%400==0)
				n++;
			else if(i%100==0)
				int s;
			else if(i%4==0)
				n++;			
		}
		cout<<n<<endl;
	}
}
