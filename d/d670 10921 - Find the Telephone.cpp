#include<iostream>
using namespace std;

int main()
{
	char a[50];
	while(cin>>a)
	{
		for(int i=0;a[i]!='\0';i++)
		{
			switch(a[i])
			{
				case '0':cout<<"0";break;
				case '1':cout<<"1";break;
				case 'A':
				case 'B':
				case 'C':cout<<"2";break;
				case 'D':
				case 'E':
				case 'F':cout<<"3";break;
				case 'G':
				case 'H':
				case 'I':cout<<"4";break;
				case 'J':
				case 'K':
				case 'L':cout<<"5";break;
				case 'M':
				case 'N':
				case 'O':cout<<"6";break;
				case 'P':
				case 'Q':
				case 'R':
				case 'S':cout<<"7";break;
				case 'T':
				case 'U':
				case 'V':cout<<"8";break;
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':cout<<"9";break;
				case '-':cout<<"-";break;
			}
		}
		cout<<endl;
	}
}
