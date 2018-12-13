#include<iostream>
using namespace std;

int main()
{
	int n;
	double x,y;
	double a;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			a=100-(x+y);
			
			if(a>0&&a<=30)
				cout<<"sad!\n";
			else if(a>30&&a<=60)
				cout<<"hmm~~\n";
			else if(a>60&&a<100)
				cout<<"Happyyummy\n";
			else
				cout<<"evil!!\n";
		}
	}
}
