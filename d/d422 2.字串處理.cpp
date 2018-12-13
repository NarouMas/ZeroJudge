#include<iostream>
#define size 100000
using namespace std;

int main()
{
	char a[size];
	int n;
	while(cin>>a)
	{
		n=0;
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]=='!')
				cout<<endl;
			else if(a[i]=='b')
			{
				//cout<<"n:"<<n<<endl;
				for(int j=0;j<n;j++)
				{
					cout<<" ";
					//cout<<"n:"<<n<<endl;
				}
				n=0;
			}
			else if(a[i]>='0'&&a[i]<='9')
				n+=int(a[i]-'0');
			else
			{
				for(int j=0;j<n;j++)
				{
					cout<<a[i];
					//cout<<"n:"<<n<<endl;
				}
				n=0;
			}		
			//cout<<"n2:"<<n<<endl;
		}
		cout<<endl;
	}
}
