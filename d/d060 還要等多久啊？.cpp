#include<iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)	
	{
		if(n<=25)
			cout<<25-n<<endl;
		else
			cout<<85-n<<endl;
	}
}
