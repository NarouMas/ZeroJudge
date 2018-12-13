#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char b[100];
	int n,n2,la,lb;
	long long int dec,t,mod;
	while(cin>>dec>>n2)
	{
		//for(int i=0;a[i]!='\0';i++)
		//	la=i;
		t=1,lb=0;
		/*for(int i=la;i>=0;i--)
		{
			if(a[i]>='0'&&a[i]<='9')
				dec+=int(a[i]-'0')*t;
			else
				dec+=int(a[i]-'A'+10)*t;
			t*=n;
		}*/
		
		while(dec!=0)
		{
			if(dec<0)
				mod=dec*-1%2;
			else
				mod=dec%n2;
			if(mod>=10)
				b[lb]=char(mod-10+'A');
			else
				b[lb]=char(mod%n2+'0');
			dec/=n2;
			lb++;
		}
		lb--;
		for(int i=lb;i>=0;i--)
			cout<<b[i];
		cout<<endl;
	}
}
