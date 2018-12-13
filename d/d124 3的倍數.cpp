#include<iostream>
using namespace std;

int main()
{
	char a[100000];
	for(int i=0;i<100000;i++)
		a[i]='a';
	long long b;
	while(cin>>a)
	{
		b=0;
		for(int i=0;a[i]!='a';i++)
		{
			switch(a[i])
			{
				case '1':b+=1; break;
				case '2':b+=2; break;
				case '3':b+=3; break;
				case '4':b+=4; break;
				case '5':b+=5; break;
				case '6':b+=6; break;
				case '7':b+=7; break;
				case '8':b+=8; break;
				case '9':b+=9; break;
				case '0':b+=0; break;
				case '-':b+=0; break;
			}
			
		}
		if(b%3==0)
			cout<<"yes\n";
		else
			cout<<"no\n";
		for(int i=0;i<100000;i++)
			a[i]='a';
	}
}
