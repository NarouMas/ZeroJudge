#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n>0)
		{
			switch(n%12)
			{
				case 1: cout<<"��\n";break;
				case 2: cout<<"��\n";break;
				case 3: cout<<"��\n";break;
				case 4: cout<<"��\n";break;
				case 5: cout<<"�s\n";break;
				case 6: cout<<"�D\n";break;
				case 7: cout<<"��\n";break;
				case 8: cout<<"��\n";break;
				case 9: cout<<"�U\n";break;
				case 10: cout<<"��\n";break;
				case 11: cout<<"��\n";break;
				case 0: cout<<"��\n";break;
			}
		}
		else if(n<0)
		{
			n*=-1;
			switch(n%12)
			{
				case 1: cout<<"��\n";break;
				case 2: cout<<"��\n";break;
				case 3: cout<<"��\n";break;
				case 4: cout<<"�U\n";break;
				case 5: cout<<"��\n";break;
				case 6: cout<<"��\n";break;
				case 7: cout<<"�D\n";break;
				case 8: cout<<"�s\n";break;
				case 9: cout<<"��\n";break;
				case 10: cout<<"��\n";break;
				case 11: cout<<"��\n";break;
				case 0: cout<<"��\n";break;
			}
		}
	}
}
