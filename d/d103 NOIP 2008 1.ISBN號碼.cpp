#include<iostream>
using namespace std;

int main()
{
	char a[15];
	int n;
	while(cin>>a)
	{
		n=0;
		for(int i=0,j=1;i<12;i++)
		{
			if(a[i]!='-')
			{
				n+=int(a[i]-'0')*j;
				//cout<<"int(a[i]-'0')*j"<<int(a[i]-'0')*j<<endl;
				j++;
			}
		}
		//cout<<"n:"<<n<<endl;
		if(n%11==int(a[12]-'0'))
			cout<<"Right\n";
		else if(n%11==10&&a[12]=='X')
			cout<<"Right\n";
		else
		{
			for(int i=0;i<12;i++)
				cout<<a[i];
			if(n%11==10)
				cout<<"X"<<endl;
			else
				cout<<n%11<<endl;
		}
			
	}
}
