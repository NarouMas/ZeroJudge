#include<iostream>
using namespace std;

int main()
{
	int m,d;
	int s;
	//S=(M*2+D)%3
	while(cin>>m)
	{
		cin>>d;
		s=(m*2+d)%3;
		if(s==0)
			cout<<"´¶³q\n";
		if(s==1)
			cout<<"¦N\n";
		if(s==2)
			cout<<"¤j¦N\n";
	}
}
