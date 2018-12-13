#include<iostream>
using namespace std;

int main()
{
	int n,p,g,num;
	int a[100001];
	
	while(cin>>n)
	{
		while(n--)
		{
			cin>>g>>p;
			for(int i=0;i<p;i++)
			{
				cin>>num;
				a[num]=g;
			}
				
		}
		cin>>num;
		cout<<a[num]<<endl;
	}
}
