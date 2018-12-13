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
				case 1: cout<<"¹«\n";break;
				case 2: cout<<"¤û\n";break;
				case 3: cout<<"ªê\n";break;
				case 4: cout<<"¨ß\n";break;
				case 5: cout<<"Às\n";break;
				case 6: cout<<"³D\n";break;
				case 7: cout<<"°¨\n";break;
				case 8: cout<<"¦Ï\n";break;
				case 9: cout<<"µU\n";break;
				case 10: cout<<"Âû\n";break;
				case 11: cout<<"ª¯\n";break;
				case 0: cout<<"½Þ\n";break;
			}
		}
		else if(n<0)
		{
			n*=-1;
			switch(n%12)
			{
				case 1: cout<<"½Þ\n";break;
				case 2: cout<<"ª¯\n";break;
				case 3: cout<<"Âû\n";break;
				case 4: cout<<"µU\n";break;
				case 5: cout<<"¦Ï\n";break;
				case 6: cout<<"°¨\n";break;
				case 7: cout<<"³D\n";break;
				case 8: cout<<"Às\n";break;
				case 9: cout<<"¨ß\n";break;
				case 10: cout<<"ªê\n";break;
				case 11: cout<<"¤û\n";break;
				case 0: cout<<"¹«\n";break;
			}
		}
	}
}
