#include<iostream>
#include<algorithm>
using namespace std; 

int main()
{
	unsigned long long int a[4],n;
	while(cin>>n)
	{
		while(n--)
		{
			for(int i=0;i<4;i++)
				cin>>a[i];
			sort(a,a+4);
			if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
				cout<<"square\n";
			else if(a[0]==a[1]&&a[2]==a[3])
				cout<<"rectangle\n";
			else if(a[0]+a[1]+a[2]>a[3])
				cout<<"quadrangle\n";
			else 
				cout<<"banana\n";
		}
	}
}
