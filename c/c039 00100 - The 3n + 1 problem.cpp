#include<iostream>
using namespace std;

int main()
{
	int a,b,n,max,t;
	while(cin>>a>>b)
	{
		cout<<a<<" "<<b<<" ";
		if(a>b)
			swap(a,b);
		max=0;
		for(int i=a;i<=b;i++)
		{
			n=i;
			t=1;
			while(n!=1)
			{
				if(n%2==0)
					n=n/2;
				else
					n=3*n+1;
				t++;
			}
			if(t>max)
				max=t;
		}
		cout<<max<<endl;
	}
}
