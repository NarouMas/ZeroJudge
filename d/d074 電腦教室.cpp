#include<iostream>
using namespace std;

int main()
{
	int n;
	long long a[10000];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		int max=0;
		for(int i=0;i<n;i++)
			if(a[i]>max)
				max=a[i];
		cout<<max<<endl;
	}
}
