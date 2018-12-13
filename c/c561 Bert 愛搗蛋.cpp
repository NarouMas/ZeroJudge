#include<iostream>
#define size 100
using namespace std;

int main()
{
	char c[size];
	int n,a[100000],len,max;
	while(cin>>n)
	{
		max=0;
		for(int i=0;i<100000;i++)
			a[i]=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<size;j++)
				c[j]=' ';
			cin>>c;
			for(int j=0,t=1;c[j]!='\0';j++,t*=10)
			{
				a[i]+=int(c[j]-'0')*t;
				//cout<<"a["<<i<<"]="<<a[i]<<endl;
			}
			if(a[i]>max)
				max=a[i];
			
		}
		cout<<max<<endl;
	}
}
