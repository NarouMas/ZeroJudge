#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char a[20];
	for(int i=0;i<20;i++)
		a[i]=' ';
	int n,len;
	long double b;
	while(cin>>a)
	{
		n=0;
		for(int i=0;a[i]!=' ';i++)
			len=i;
		for(int i=len-1,t=1;i>=0;i--,t*=10)
		{
			if(i==len-3)
				i--;
			n+=int(a[i]-'0')*t;
		}
		//cout<<n<<endl;
		if(n<=10000)
			n=n*9/10+800;
		else if(n<=50000)
			n=n*8/10;
		else
			n=n*6/10;
		b=n;
		b=b/100;
		cout<<'$'<<fixed<<setprecision(2)<<b<<endl;
		for(int i=0;i<20;i++)
			a[i]=' ';
	}
}
