#include<iostream>
using namespace std;

int main()
{
	char a[15];
	int n;
	while(cin>>a)
	{
		n=0;
		for(int i=0;a[i]!='\0';i++)
		{
			if(a[i]=='0'||a[i]=='6'||a[i]=='9')
				n+=1;
			else if(a[i]=='8')
				n+=2;
		}
		cout<<n<<endl;
	}
}
