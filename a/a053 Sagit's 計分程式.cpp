#include<iostream>
using namespace std;

int main()
{
	int n,s;
	while(cin>>n)
	{
	
		while(n>0)
		{
			if(n<=10)
				s+=6;
			else if(n>10&&n<=20)
				s+=2;
			else if(n>20&&n<=40)
				s+=1;
			else if(n>40)
				{
					s=100;
					goto end;
				}
			n--;
		}
		end:
			cout<<s<<endl;
			s=0;
	}
}
