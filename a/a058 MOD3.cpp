#include<iostream>
using namespace std;

int main()
{
	int n;
	int a[50000];
	int c,d,e;
	while(cin>>n)
	{
		c=0,d=0,e=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		{
			if(a[i]%3==0)
				c+=1;
			else if(a[i]%3==1)
				d+=1;
			else if(a[i]%3==2)
				e+=1;
		}
		cout<<c<<" "<<d<<" "<<e<<endl;
	}
}
