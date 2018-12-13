#include<iostream>
using namespace std;

int main()
{
	char a;	
	int n,len,t;
	while(cin>>n)
	{
		scanf("\n");
		/*for(int i=0;a[i]!='\0';i++)
			len=i;
		//cout<<len<<endl;
		for(int i=0;i<=len;i+=n+1)
			cout<<a[i];*/
		a='A';
		t=0,n++;
		while(a>='A'&&a<='Z')
		{
			a=getchar();
			if(t%n==0)
				cout<<a;
			t++;
		}
		
		cout<<endl;
	}
}
