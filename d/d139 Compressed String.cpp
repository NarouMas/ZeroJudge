#include<iostream>
using namespace std;

int main()
{
	char a[2000];
	int n;
	while(cin>>a)
	{
		n=1;
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]!=a[i+1])
			{
				if(n==1)
					cout<<a[i];
				else if(n==2)
					cout<<a[i]<<a[i];
				else
					cout<<n<<a[i];
				n=1;
			}
			else
				n++;
		}
		cout<<endl;
	}
}
