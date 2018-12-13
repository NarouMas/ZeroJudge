#include<iostream>
#define size 100000
using namespace std;

int main()
{
	int n=0,len,len2,num;
	char a[size];
	int b[size];
	for(int i=0;i<size;i++)
		a[i]=' ';
	while(cin.getline(a,size))
	{
		n=0;
		for(int i=0;a[i]!=' '||a[i+1]!=' ';i++)
		{
			if(a[i]>='0'&&a[i]<='9')
			{
				for(int j=i;a[j]!=' ';j++)
					len2=j-i+1;
				int t=1;
				for(int j=0;j<len2-1;j++)
					t*=10;
				//if(i!=0)
				//	t/=10;
				num=0;
				//cout<<"len2:"<<len2<<" t:"<<t;
				for(int j=i;a[j]!=' ';j++,t/=10)
				{
					num+=int(a[j]-'0')*t;
				}
				//cout<<" num:"<<num<<endl;
				b[n]=num;
				n++;
				i=i+len2-1;
			}
			else if(a[i]!=' ')
			{
				switch(a[i])
				{
					case '+':b[n-2]=b[n-2]+b[n-1];n--;break;
					case '-':b[n-2]=b[n-2]-b[n-1];n--;break;
					case '*':b[n-2]=b[n-2]*b[n-1];n--;break;
					case '/':b[n-2]=b[n-2]/b[n-1];n--;break;
					case '%':b[n-2]=b[n-2]%b[n-1];n--;break;
				}
			}
		}
		cout<<b[0]<<endl;
		for(int i=0;i<size;i++)
			a[i]=' ';
	}
}
