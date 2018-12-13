#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string s;
	char c;
	long long sum,n;
	int t;
	s.clear();
	while(cin>>t)
	{
		cin.ignore();
		while(t--)
		{
			getline(cin,s);
			stringstream ss(s);
			sum=0;
			while(ss>>n)
			{
				sum+=n;
				ss>>c;
			}
			cout<<sum<<endl;
		}		
	}
}
