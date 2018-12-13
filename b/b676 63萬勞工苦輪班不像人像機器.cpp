#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		switch(n%5)
		{
			case 0:cout<<"U\n";break;
			case 1:cout<<"G\n";break;
			case 2:cout<<"Y\n";break;
			case 3:cout<<"T\n";break;
			case 4:cout<<"I\n";break;
		}
	}
}
