#include<iostream>
using namespace std;

int main()
{
	int b,d;
	long n1,n2;
	char a[10];
	while(cin>>b>>a)
	{
		n1=n2=0;
		for(int i=0;a[i]!='\0';i++)
			d=i;
		for(int i=d,j=1,k,ck,n;i>=0;i--,j*=b)
		{
			n1+=int(a[i]-'0')*j;
			k=ck=int(a[i]-'0');
			for(n=1;n<d+1;n++)
				k*=ck;
			//cout<<"k:"<<k<<endl;
			n2+=k;
		}
		if(n1==n2)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		//cout<<n1<<" "<<n2<<endl;
	}
}
