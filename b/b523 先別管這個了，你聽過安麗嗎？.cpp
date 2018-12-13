#include<iostream>
using namespace std;

int main()
{
	string s[500],ss;
	int n;
	bool dis;
	n=0;
	while(getline(cin,s[0]))
	{
		//getline(cin,s[0]);
		cout<<"NO\n";
		n++;
		while(true)
		{
			getline(cin,ss);
			dis=false;
			for(int i=0;i<n;i++)
			{
				if(s[i]==ss)
				{
					cout<<"YES\n";
					dis=true;
					break;
				}
			}
			if(!dis)
			{
				s[n]=ss;
				n++;
				cout<<"NO\n";
			}
				
		}
	}
}
