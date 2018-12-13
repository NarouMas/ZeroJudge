#include<iostream>
#define size 200000
using namespace std;

int main()
{
	char a[size];
	int t,len,n;
	bool d;
	int pow[320];
	for(int i=0;i<320;i++)
		pow[i]=i*i;;
	while(cin>>t)
	{
		cin.getline(a,size);
		while(t--)
		{
			d=false;
			cin.getline(a,size);
			for(int i=0;a[i]!='\0';i++)
				len=i;
			for(int i=0;i<320;i++)
				if(len+1==pow[i])
				{
					d=true;
					n=i;
					break;
				}
					
			if(d)
			{
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<n;j++)
					{
						cout<<a[i+j*n];
					}
				}
				cout<<endl;
			}
			else
				cout<<"INVALID\n";
		}
	}
}
