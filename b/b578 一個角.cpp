#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	long long a[3];
	while(cin>>n)
	{
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<3;i++)
				cin>>a[i];
			sort(a,a+3);
			if((a[0]*a[0])+(a[1]*a[1])<a[2]*a[2])
				cout<<"obtuse triangle\n";
			else if((a[0]*a[0])+(a[1]*a[1])==a[2]*a[2])
				cout<<"right triangle\n";
			else
				cout<<"acute triangle\n";
		}
		
	}
}
