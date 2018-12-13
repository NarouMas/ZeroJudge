#include<iostream>
using namespace std;

int main()
{
	int n;
	int t[20000],t2[20000];
	int a,b,k;
	while(cin>>n)
	{
		t[0]=1,t[1]=0;
		a=b=1,k=0;
		while(n--)
		{
			k=0;
			for(int i=0;t[i]!=0;i++)
			{
				a=1,b=t[i];
				for(int j=i;t[j]==t[j+1];j++,i++)
				{
					a++;
				}
				t2[k]=a,t2[k+1]=b;
				k+=2;
			}
			t2[k]=0;
			for(int i=0;t2[i]!=0;i++)
				t[i]=t2[i];
			t[k]=0;
		}
		for(int i=0;t[i]!=0;i++)
			cout<<t[i];
		cout<<endl;
	}
}
