#include<iostream>
using namespace std;

int main()
{
	long n1,n2;
	int a[35],b[35],c[35],t1,t2;
	while(cin>>n1>>n2)
	{
		for(int i=0;i<35;i++)	
			a[i]=b[i]=c[i]=0;
		t1=0;
		while(n1>0)
		{
			a[t1]=n1%2;
			n1/=2;
			t1++;
		}
		//a[t1]=1;
		t2=0;
		while(n2>0)
		{
			b[t2]=n2%2;
			n2/=2;
			t2++;
		}
		//b[t2]=1;
		n1=0,n2=1;
		/*for(int i=t1-1;i>=0;i--)
			cout<<a[i];
		cout<<endl;
		for(int i=t2-1;i>=0;i--)
			cout<<b[i];
		cout<<endl;*/
		for(int i=0;i<t1||i<t2;i++,n2*=2)
			if(a[i]==1 xor b[i]==1)
			{
				n1+=n2;
			}
		cout<<n1<<endl;
	}
}
