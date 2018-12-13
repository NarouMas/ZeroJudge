#include<iostream>
#include<cmath>
using namespace std;

int getnum(char []);
int getindex(char);
int main()
{
	char a[100],b[100];
	int n1,n2,n;
	string s[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int num[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
	while(cin>>a)
	{
		if(a[0]=='#')
			break;
		cin>>b;
		n1=getnum(a);
		n2=getnum(b);
		n=abs(n1-n2);
		//cout<<"n1:"<<n1<<" n2:"<<n2<<endl;
		if(n==0)
			cout<<"ZERO";
		while(n>0)
		{
			for(int i=0;i<13;i++)
			{
				if(n>=num[i])
				{
					n-=num[i];
					cout<<s[i];
					break;
				}
			}
		}
		cout<<endl;
	}
}

int getnum(char a[100])
{
	int n;
	n=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(getindex(a[i])>=getindex(a[i+1]))
		{
			n+=getindex(a[i]);
			//cout<<"a:"<<a[i]<<" get:"<<getindex(a[i])<<endl;
		}
			
		else
		{
			n+=getindex(a[i+1])-getindex(a[i]);
			i++;
			//cout<<"a:"<<a[i]<<" get:"<<getindex(a[i])<<" get i+1:"<<getindex(a[i+1])<<endl;
		}
			
	}
	return n;
}

int getindex(char a)
{
	int n;
	switch(a)
	{
		case 'M': n=1000; break;
		case 'D': n=500; break;
		case 'C': n=100; break;
		case 'L': n=50; break;
		case 'X': n=10; break;
		case 'V': n=5; break;
		case 'I': n=1; break;
		default : n=0; break;
	}
	return n;
}
