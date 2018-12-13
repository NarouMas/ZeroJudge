#include<iostream>
using namespace std;

int main()
{
	char a[33],b[33];
	int c[32];
	bool d;
	while(cin>>a>>b)
	{
		d=false;
		for(int i=31;i>=0;i--)
		{
			c[i]=int(a[i]-'0')+int(b[i]-'0');
		}
		for(int i=31;i>=0;i--)
		{
			if(c[i]>1)
			{
				c[i-1]+=c[i]/2;
				c[i]=c[i]%2;
			}
		}
		for(int i=0;i<32;i++)
			cout<<a[i];
		cout<<endl;
		for(int i=0;i<32;i++)
			cout<<b[i];
		cout<<endl;
		cout<<"---------------------------------\n";
		for(int i=0;i<32;i++)
			cout<<c[i];
		cout<<endl;
		cout<<"****End of Data******************\n";
	}
}
