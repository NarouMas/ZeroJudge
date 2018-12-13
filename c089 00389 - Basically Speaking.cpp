#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char a[100],b[100];
	int n,n2,la,lb;
	unsigned long long int dec,t;
	while(cin>>a>>n>>n2)
	{
		for(int i=0;a[i]!='\0';i++)
			la=i;
		dec=0,t=1,lb=0;
		for(int i=la;i>=0;i--)
		{
			if(a[i]>='0'&&a[i]<='9')
				dec+=int(a[i]-'0')*t;
			else
				dec+=int(a[i]-'A'+10)*t;
			t*=n;
		}
		
		while(dec!=0)
		{
			if(dec%n2>=10)
				b[lb]=char(dec%n2-10+'A');
			else
				b[lb]=char(dec%n2+'0');
			dec/=n2;
			lb++;
		}
		lb--;
		if(lb<=6)
		{
			for(int i=0;i<6-lb;i++)
				cout<<" ";
			for(int i=lb;i>=0;i--)
				cout<<b[i];
		}
		else
			cout<<"  ERROR";
		cout<<endl;
	}
}
