#include<iostream>
using namespace std;

int main()
{
	char a[10];
	int n,len;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>a;
			for(int i=0;a[i]!='\0';i++)
				len=i;
			if(len==2)
			{
				if(a[0]=='o'&&a[1]=='n')
					cout<<"1\n";
				else if(a[0]=='o'&&a[2]=='e')
					cout<<"1\n";
				else if(a[1]=='n'&&a[2]=='e')
					cout<<"1\n";
				else if(a[0]=='t'&&a[1]=='w')
					cout<<"2\n";
				else if(a[0]=='t'&&a[2]=='o')
					cout<<"2\n";
				else if(a[1]=='w'&&a[2]=='o')
					cout<<"2\n";
			}
			else if(len==4)
				cout<<"3\n";
		}
	}
}
