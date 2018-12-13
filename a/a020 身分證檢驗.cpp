#include<iostream>
using namespace std;

int main()
{
	char a;
	char f[9];
	while(cin>>a)
	{
		for(int i=0;i<9;i++)
			cin>>f[i];
		int c,d;
		switch(a)
		{
			case 'A': c=1,d=0; break; case'B': c=1,d=1; break; case'C': c=1,d=2; break;
			case'D': c=1,d=3; break; case'E': c=1,d=4; break; case'F': c=1,d=5; break;
			case'G': c=1,d=6; break; case'H': c=1,d=7; break; case'I': c=3,d=4; break;
			case'J': c=1,d=8; break; case'K': c=1,d=9; break; case'L': c=2,d=0; break;
			case'M': c=2,d=1; break; case'N': c=2,d=2; break; case'O': c=3,d=5; break;
			case'P': c=2,d=3; break; case'Q' :c=2,d=4; break; case'R': c=2,d=5; break;
			case'S': c=2,d=6; break; case'T' :c=2,d=7; break; case'U' :c=2,d=8; break;
			case'V': c=2,d=9; break; case'W' :c=3,d=2; break; case'X' :c=3,d=0; break;
			case'Y': c=3,d=1; break; case'Z' :c=3,d=3; break;
		}
		int b[9];
		for(int i=0;i<9;i++)
			switch(f[i])
			{
				case '1':b[i]=1; break; case '2':b[i]=2; break; case '3':b[i]=3; break;
				case '4':b[i]=4; break; case '5':b[i]=5; break; case '6':b[i]=6; break;
				case '7':b[i]=7; break; case '8':b[i]=8; break; case '9':b[i]=9; break;
				case '0':b[i]=0;
			}
		int e=0;
		for(int i=0;i<8;i++)
			e=e+b[i]*(8-i);
		e=e+c+d*9+b[8];
		if(e%10==0)
			cout<<"real\n";
		else
			cout<<"fake\n";
	}
	
}
