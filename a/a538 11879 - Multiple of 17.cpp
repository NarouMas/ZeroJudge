#include<iostream>
using namespace std;

int main()
{
	char c[100000];
	int a,b=17;
	int n;
	int bn[100000];
	for(int i=0;i<100000;i++)
		c[i]='a';
	while(cin>>c)
	{
		if(c[0]=='0')
			break;
		//for(int i=0;i<10;i++)
		//	cout<<c[i];
		//system("pause");
		n=0;
		a=int(c[n])-48;
		while(c[n]!='a')
		{	
			//cout<<a/b;
			bn[n]=a%b;
			a=a%b*10+int(c[n+1])-48;
			n++;
		}
		//cout<<"n="<<n<<endl;
		//for(int i=0;i<n-1;i++)
		//	cout<<bn[i]<<endl;
		if(bn[n-2]==0)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
		
		for(int i=0;i<100000;i++)
		c[i]='a';
		
	}
}
